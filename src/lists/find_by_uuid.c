/*
** EPITECH PROJECT, 2021
** Project
** File description:
** find_by_uuid.c
*/

#include "../../includes/linked_list.h"

void *find_user_by_uuid(linked_list_t *list_head, uuid_t uuid)
{
    linked_list_t *tmp = list_head;

    if (!tmp)
        return (NULL);
    for (; tmp->next; tmp = tmp->next) {
        if (!uuid_compare(uuid, ((user_t *)tmp->data)->id))
            return (data);
    }
    return (NULL);
}

void *find_thread_by_uuid(linked_list_t *list_head, uuid_t uuid)
{
    linked_list_t *tmp = list_head;

    if (!tmp)
        return (NULL);
    for (; tmp->next; tmp = tmp->next) {
        if (!uuid_compare(uuid, ((thread_t *)tmp->data)->id))
            return (data);
    }
    return (NULL);
}

void *find_channel_by_uuid(linked_list_t *list_head, uuid_t uuid)
{
    linked_list_t *tmp = list_head;

    if (!tmp)
        return (NULL);
    for (; tmp->next; tmp = tmp->next) {
        if (!uuid_compare(uuid, ((channel_t *)tmp->data)->id))
            return (data);
    }
    return (NULL);
}

void *find_team_by_uuid(linked_list_t *list_head, uuid_t uuid)
{
    linked_list_t *tmp = list_head;

    if (!tmp)
        return (NULL);
    for (; tmp->next; tmp = tmp->next) {
        if (!uuid_compare(uuid, ((team_t *)tmp->data)->id))
            return (data);
    }
    return (NULL);
}