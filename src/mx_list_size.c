#include "libmx.h"

int mx_list_size(t_list *list) {
    if (list == NULL)
        return 0;

    int res = 0;

    while (list != NULL) {
        list = list->next;
        res++;
    }
    return res;
}
