/*
** EPITECH PROJECT, 2024
** bac-a-sable
** File description:
** list_free
*/

#include <list.h>

void list_free(list *list)
{
    if (list == NULL)
        return;
    list_foreach(list, node)
    free(node->value);
    list_clear(list);
    free(list);
}
