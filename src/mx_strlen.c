#include "libmx.h"

int mx_strlen(const char *s) {
    int length = 0;

    if(s[0] == '\0') return length;

    while (*s != '\0') {
        length++;
        s++;
    }

    return length;
}
