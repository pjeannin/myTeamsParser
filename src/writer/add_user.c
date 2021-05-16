/*
** EPITECH PROJECT, 2021
** Project
** File description:
** add_user.c
*/

#include "writer.h"

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
    free(char_uuid);
}