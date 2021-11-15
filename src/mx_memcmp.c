#include "libmx.h"

int mx_memcmp(const void *s1, const void *s2, size_t n) {
    for (size_t i = 0; i < n; i++) {
        if (((char*)s1)[i] != ((char*)s2)[i])
            return (int)(((char*)s1)[i] - ((char*)s2)[i]);
    }
    return 0;
}
