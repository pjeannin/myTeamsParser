/*
** EPITECH PROJECT, 2024
** Parser
** File description:
** Created by antonyftp
*/

#include "loader.h"

static team_t *set_team_infos(char **splited_line)
{
    team_t *teams_infos = malloc(sizeof(team_t));

    uuid_parse(splited_line[1], teams_infos->id);
    return (teams_infos);
}

team_list_t *load_teams(void)
{
    team_list_t *team_list_head = NULL;
    FILE *file = open_file(TEAMS_FILEPATH, "r");
    size_t size = 0;
    char *line = NULL;
    char **splitted_line = NULL;

    getline(&line, &size, file);
    while (getline(&line, &size, file) != -1) {
        splitted_line = split_string(line, ";\n");
        team_list_head = add_node(team_list_head, set_team_infos(splitted_line));
    }

    return (team_list_head);
}