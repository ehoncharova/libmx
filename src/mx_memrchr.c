#include "libmx.h"

void *mx_memrchr(const void *s, int c, size_t n) {
    if (!s || n <= 0)
        return NULL;

    while (n > 0) {
        if (((unsigned char*)s)[n] == (unsigned char)c)
            return (void*)&((char*)s)[n];
        n--;
    }
    return NULL;
}
