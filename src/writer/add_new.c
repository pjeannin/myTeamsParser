/*
** EPITECH PROJECT, 2021
** Project
** File description:
** add_user.c
*/

#include "../../includes/writer.h"

int add_user(char *username, uuid_t uuid)
{
    FILE *file = NULL;
    char *char_uuid;

    if (check_file(USER_PATH) == -1)
        return (-1);
    file = fopen(USER_PATH, "a");
    if (!file)
        return (-1);
    char_uuid = malloc(sizeof (char) * 37);
    uuid_unparse_upper(uuid, char_uuid);
    fprintf(file, "\n%s;%s", username, char_uuid);
    fclose(file);
    free(char_uuid);
    return (0);
}

int add_thread(char *title, uuid_t uuid, char *owner, char *message)
{
    FILE *file = NULL;
    char *char_uuid;

    if (check_file(THREAD_PATH) == -1)
        return (-1);
    file = fopen(THREAD_PATH, "a");
    if (!file)
        return (-1);
    char_uuid = malloc(sizeof(char) * 37);
    uuid_unparse_upper(uuid, char_uuid);
    fprintf(file, "\n%s;%s;%s;%s\n", title, char_uuid, owner, message);
    fclose(file);
    free(char_uuid);
    return (0);
}

int add_team(char *title, uuid_t uuid, char *description, char *owner)
{
    FILE *file = NULL;
    char *char_uuid;

    if (check_file(TEAM_PATH) == -1)
        return (-1);
    file = fopen(TEAM_PATH, "a");
    if (!file)
        return (-1);
    char_uuid = malloc(sizeof(char) * 37);
    uuid_unparse_upper(uuid, char_uuid);
    fprintf(file, "\n%s;%s;%s;%s;", title, char_uuid, description, owner);
    fclose(file);
    free(char_uuid);
    return (0);
}

int add_channel(char *title, uuid_t uuid, char *description, char *owner)
{
    FILE *file = NULL;
    char *char_uuid;

    if (check_file(CHANNEL_PATH) == -1)
        return (-1);
    file = fopen(CHANNEL_PATH, "a");
    if (!file)
        return (-1);
    char_uuid = malloc(sizeof(char) * 37);
    uuid_unparse_upper(uuid, char_uuid);
    fprintf(file, "\n%s;%s;%s;%s;", title, char_uuid, description, owner);
    fclose(file);
    free(char_uuid);
    return (0);
}