#include "libmx.h"

char *mx_nbr_to_hex(unsigned long nbr) {
    char *res = mx_strnew(8);
    unsigned long qnt, i;

    for (i = 0; nbr > 0; i++) {
        qnt = nbr % 16;
        if (qnt >= 0 && qnt <= 9)
            res[i] = qnt + '0';
        else
            res[i] = qnt + 87;
        nbr /= 16;
    }
    mx_str_reverse(res);
    return res;
}
