/*
** EPITECH PROJECT, 2021
** Untitled (Workspace)
** File description:
** thread_list
*/

#include "../../includes/linked_list.h"

struct thread_t *add_threadnode(struct thread_t *node, struct thread_t *list)
{
    struct thread_t *temp_first = list;

    if (!list) {
        list = node;
        return (list);
    }
    while(list->next)
        list = list->next;
    list->next = node;
    list = temp_first;
    return (list);
}

struct thread_t *remove_threadnode(uuid_t searched, struct thread_t *list)
{
    struct thread_t *temp_first = list;
    struct thread_t *before = NULL;

    while (list && list->id != searched) {
        before = list;
        list = list->next;
    }
    if (list == NULL) {
        list = temp_first;
        return (NULL);
    }
    if (list == temp_first) {
        list = list->next;
        list = temp_first;
        return (list);
    }
    before->next = list->next;
    list = temp_first;
    return (list);
}

struct thread_t *find_threadnode(uuid_t searched, struct thread_t *list)
{
    struct thread_t *temp = list;

    while (temp && temp->id != searched) {
        temp = temp->next;
    }
    return (temp);
}