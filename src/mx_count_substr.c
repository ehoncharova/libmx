#include "libmx.h"

int mx_count_substr(const char *str, const char *sub) {
    if (str == NULL || sub == NULL)
        return -1;
    if(*sub == '\0')
        return 0;
    int cnt = 0;
    int len_2 = mx_strlen(sub);
    while (*str != '\0') {
    if(*str == *sub) {
        if(!mx_strncmp(str, sub, len_2))
            cnt++;
    }
    str++;
    }
    return cnt;
}
