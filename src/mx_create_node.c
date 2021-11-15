#include "libmx.h"

t_list *mx_create_node(void *data) {
    t_list *tmp_data = malloc(sizeof(t_list));

    tmp_data->data = data;
    tmp_data->next = NULL;

    return tmp_data;
}
