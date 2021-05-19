/*
** EPITECH PROJECT, 2021
** Untitled (Workspace)
** File description:
** users_list
*/

#include "../../includes/linked_list.h"

struct user_t *add_usernode(struct user_t *node, struct user_t *list)
{
    struct user_t *temp_first = list;

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

struct user_t *remove_usernode(uuid_t searched, struct user_t *list)
{
    struct user_t *temp_first = list;
    struct user_t *before = NULL;

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

struct user_t *find_usernode(uuid_t searched, struct user_t *list)
{
    struct user_t *temp = list;

    while (temp && temp->id != searched) {
        temp = temp->next;
    }
    return (temp);
}

struct user_t *find_usernodebyname(char *searched, struct user_t *list)
{
    struct user_t *temp = list;

    while (temp && temp->username != searched) {
        temp = temp->next;
    }
    return (temp);
}