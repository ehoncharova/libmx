#include "libmx.h"

void mx_push_front(t_list** list, void* data) {
	t_list *s = mx_create_node(data);
	s->data = data;
	s->next = *list;
	*list = s;
}
