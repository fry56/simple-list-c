/*
** EPITECH PROJECT, 2024
** bac-a-sable
** File description:
** list_get
*/

#include <list.h>

list_node *list_get(list *list, size_t index)
{
    size_t i = 0;

    if (list == NULL)
        return NULL;
    list_foreach(list, node) {
        if (index == i)
            return node;
        i++;
    }
    return NULL;
}
