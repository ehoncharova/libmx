#include "libmx.h"

void *mx_memcpy(void *restrict dst, const void *restrict src, size_t n) {
    for (size_t i = 0; i < n; i++)
        ((char*)dst)[i] = ((char*)src)[i];
    return dst;
}
