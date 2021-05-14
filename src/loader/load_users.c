/*
** EPITECH PROJECT, 2021
** Parser
** File description:
** load_clients.c
*/

#include "../../includes/user.h"

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

uuid_t *set_user_infos(char **splited_line)
{
    user_infos_t *user_infos = malloc(sizeof(user_infos_t));

    user_infos->username = splited_line[0];
    user_infos->uuid = (uuid_t)splited_line[1];
}

linked_list_s *load_users()
{
    linked_list_s *users_list_head = malloc(sizeof (linked_list_s));
    FILE *file = open_file(USERS_FILEPATH, KEY);
    size_t size = 0;
    char *line = NULL;
    char **splitted_line = NULL;

    users_list_head->data = NULL;
    users_list_head->next = NULL;
    while (getline(&line, &size, file) != -1) {
        linked_list_add_elem(set_user_infos(split_string(line)));
    }
    return (users_list_head);
}