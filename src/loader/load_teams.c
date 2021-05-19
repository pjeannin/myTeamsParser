/*
** EPITECH PROJECT, 2024
** Parser
** File description:
** Created by antonyftp
*/

#include "loader.h"

static struct team_t *set_team_infos(char **splited_line)
{
    struct team_t *teams_infos = malloc(sizeof(struct user_t));

    uuid_parse(splited_line[1], teams_infos->id);
    teams_infos->next = NULL;
    return (teams_infos);
}

struct team_t *load_teams(void)
{
    struct team_t *team_list_head = NULL;
    FILE *file = open_file(USERS_FILEPATH, "r");
    size_t size = 0;
    char *line = NULL;
    char **splitted_line = NULL;

    getline(&line, &size, file);
    while (getline(&line, &size, file) != -1) {
        splitted_line = split_string(line, ";\n");
        team_list_head = add_teamnode(set_team_infos(splitted_line), team_list_head);
    }

    return (team_list_head);
}