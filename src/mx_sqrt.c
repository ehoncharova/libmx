#include "libmx.h"

int mx_sqrt (int x){
    float sqrt = 0;
    int temp_x = x;
    if (x >= 0) {
        while (sqrt*sqrt != temp_x) {
            sqrt = x/2;
            x=sqrt;
            if( x <=1 && sqrt <=1) {
                return 0;
            }
        }
        return sqrt;
    }
    else{
        return 0;
    }
}
