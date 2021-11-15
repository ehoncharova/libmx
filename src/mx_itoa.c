#include "libmx.h"

char *mx_itoa(int number) {
    char *res = mx_strnew(11);
    int rank = 1000000000;
    int i = 0;

    if ( number == -2147483648)
        return mx_strcpy(res,"-2147483648");
    if (number == 0)
        return mx_strcpy(res,"0");

    if (number < 0) {
        res[i++] = '-';
        number = -number;
    }

    while (number/rank == 0)
        rank /= 10;
    while (rank >= 1 ) {
        res[i++] = number/rank +'0';
        number %= rank;
        rank /= 10;
    }
    return res;
}
