/*
** EPITECH PROJECT, 2021
** Parser
** File description:
** load_clients.c
*/

#include "user.h"

FILE *open_file(char *filepath, char *key)
{
    FILE *file = fopen(filepath, "r");
    size_t size = 0;
    char *line = NULL;

    if (!file)
        return (NULL);
    if (getline(&line, &size, file) == -1) {
        fclose(file);
        return (NULL);
    }
    if (strcmp(line, key) != 0) {
        fclose(file);
        return (NULL);
    }
    return (file);
}

user_infos_t **load_users()
{
    user_infos_t **user_infos = malloc(sizeof (user_infos_t *) * 31);
    FILE *file = open_file(USERS_FILEPATH, USERS_KEY);
    size_t size = 0;
    char *line = NULL;
    char **splitted_line = NULL;

    if (!file) {
        free(user_infos);
        return (NULL);
    }
    for (int i = 0; i < 31; ++i) {
        user_infos[i] = NULL;
        if (getline(&line, &size, file) != -1) {
            user_infos[i] = malloc(sizeof(user_infos_t));
            splitted_line = split_string(line, ";");
            user_infos[i]->username = splitted_line[0];
            user_infos[i]->uuid = (uuid_t)splitted_line[1];
        }
    }
    return (user_infos);
}