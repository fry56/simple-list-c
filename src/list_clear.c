/*
** EPITECH PROJECT, 2024
** bac-a-sable
** File description:
** list_clear
*/

#include <list.h>

void list_clear(list *list)
{
    list_node *node, *next;

    if (list == NULL)
        return;
    node = list->head;
    while (node) {
        next = node->next;
        free(node);
        node = next;
    }
    list->head = NULL;
    list->tail = NULL;
    list->length = 0;
}
