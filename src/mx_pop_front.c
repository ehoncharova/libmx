#include "libmx.h"

void mx_pop_front(t_list **head) {
    t_list *next = NULL;

    if(*head == NULL || head == NULL)
        return;

    if ((*head)->next == NULL) {
        (*head)->data = NULL;
        free(*head);
        *head = NULL;
    }
    else {
        next = (*head)->next;
        (*head)->data = NULL;
        free(*head);
        *head = next;
    }
}
