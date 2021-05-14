/*
** EPITECH PROJECT, 2021
** Project
** File description:
** linked_list.c
*/

#include "linked_list.h"

void linked_list_add_elem(linked_list_t *list_head, void *data)
{
    while (list_head->next)
        list_head = list_head->next;
    if (list_head->data) {
        list_head->next = malloc(sizeof (linked_list_t));
        list_head = list_head->next;
    }
    list_head->data = data;
}