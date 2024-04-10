/*
** EPITECH PROJECT, 2024
** bac-a-sable
** File description:
** list_add
*/

#include <list.h>

static void list_add_node(list *list, list_node *node)
{
    node->host = list;
    list->length++;
    if (list->tail == NULL) {
        list->head = node;
        list->tail = node;
        return;
    }
    node->next = NULL;
    list->tail->next = node;
    node->prev = list->tail;
    list->tail = node;
}


list_node *list_add(list *list, void *value)
{
    list_node *node;

    if (list == NULL)
        return NULL;
    node = calloc(1, sizeof(list_node));
    if (node == NULL)
        return NULL;
    node->value = value;
    node->next = NULL;
    node->prev = NULL;
    list_add_node(list, node);
    return node;
}
