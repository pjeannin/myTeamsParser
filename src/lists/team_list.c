/*
** EPITECH PROJECT, 2021
** Untitled (Workspace)
** File description:
** team_list
*/

#include "../includes/server.h"

struct team_t *add_teamnode(struct team_t *node, struct team_t *list)
{
    struct team_t *temp_first = list;

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

struct team_t *remove_teamnode(uuid_t searched, struct team_t *list)
{
    struct team_t *temp_first = list;
    struct team_t *before = NULL;

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

struct team_t *find_teamnode(uuid_t searched, struct team_t *list)
{
    struct team_t *temp = list;

    while (temp && temp->id != searched) {
        temp = temp->next;
    }
    return (temp);
}