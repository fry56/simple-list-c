/*
** EPITECH PROJECT, 2024
** bac-a-sable
** File description:
** list_new
*/

#include <list.h>

list *list_new(void)
{
    return calloc(1, sizeof(list));
}
