/*
** EPITECH PROJECT, 2021
** Parser
** File description:
** load_clients.c
*/

#include "loader.h"

static user_t *set_user_infos(char **splited_line)
{
    user_t *user_infos = malloc(sizeof(user_t));

    user_infos->username = strdup(splited_line[0]);
    uuid_parse(splited_line[1], user_infos->id);

    return (user_infos);
}

user_list_t *load_users(void)
{
    user_list_t *users_list_head = NULL;
    FILE *file = open_file(USERS_FILEPATH, "r");
    size_t size = 0;
    char *line = NULL;
    char **splitted_line = NULL;

    getline(&line, &size, file);
    while (getline(&line, &size, file) != -1) {
        splitted_line = split_string(line, ";\n");
        users_list_head = add_node(users_list_head, set_user_infos(splitted_line));
        free_tab(splitted_line);
    }
    return(users_list_head);
}