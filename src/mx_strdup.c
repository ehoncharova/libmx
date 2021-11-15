
   
#include "libmx.h"

char *mx_strdup(const char *str) {
    char *arr_dst;

    arr_dst = mx_strnew(mx_strlen(str));
    return mx_strcpy(arr_dst, str);
}
