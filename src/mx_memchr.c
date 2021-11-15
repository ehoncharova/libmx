#include "libmx.h"

void *mx_memchr(const void *s, int c, size_t n) {
    if (!s || n <= 0)
        return NULL;

    for (size_t i = 0; i < n; i++) {
        if (((unsigned char*)s)[i] == (unsigned char)c)
            return (void*)&((char*)s)[i];
    }
    return NULL;
}
