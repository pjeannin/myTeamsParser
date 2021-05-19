/*
** EPITECH PROJECT, 2021
** Project
** File description:
** set_parent.c
*/

#include "../../includes/writer.h"

void set_channel_parent(uuid_t uuid, char *name)
{
    add_thread_channel_to_upper(TEAM_PATH, uuid, name);
}

void set_thread_parent(uuid_t uuid, char *name)
{
    add_thread_channel_to_upper(CHANNEL_PATH, uuid, name);
}