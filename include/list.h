/*
** EPITECH PROJECT, 2024
** bac-a-sable
** File description:
** list
*/

#pragma once

#include <stdbool.h>
#include <stddef.h>
#include <stdlib.h>

typedef struct list_node {
    void *host;
    void *value;
    struct list_node *next;
    struct list_node *prev;
} list_node;

typedef struct list_s {
    list_node *head;
    list_node *tail;
    size_t length;
} list;

#define list_foreach(list, node) \
            for (list_node *node = list->head; node; node = node->next)

#define list_foreach_rev(list, node) \
            for (list_node *node = list->tail; node; node = node->prev)

list *list_new(void);
list_node *list_get(list *list, size_t index);
list_node *list_add(list *list, void *value);
bool list_remove(list *list, list_node *node);
