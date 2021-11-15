#include "libmx.h"

int mx_count_words(const char *str, char delimiter) {
    if (str == NULL)
        return -1;
        
    int counter = 0;
    bool check = false;

    while (*str != '\0') {
    
        if(*str != delimiter && !check) {
            check = true;
            counter++;
        }
        if(*str == delimiter)
            check = false;
        str++;
    }
    return counter;
}
