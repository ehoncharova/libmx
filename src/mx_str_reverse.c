#include "libmx.h"

void mx_str_reverse(char *s) {
    if (!s)
        return;

    int front = 0;
    int back = mx_strlen(s) - 1;
    int half = mx_strlen(s)/2;

    while (front < half)
        mx_swap_char(&s[front++], &s[back--]);
}
