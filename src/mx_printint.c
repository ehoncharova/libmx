#include "libmx.h"

void mx_printint(int n) { 
    int rank = 1000000000;

    if ( n == -2147483648) {
        write(1, "-2147483648", 11);
        return;
    }
    if (n == 0) {
        write(1, "0", 1);
        return;
    }
    if (n < 0) {
        mx_printchar('-');
        n = -n;
    }

    while (n/rank == 0) 
        rank /= 10;
    while (rank >=1 ) {
        mx_printchar(n/rank +'0');
        n %= rank;
        rank /= 10;
    }
}
