/*
** EPITECH PROJECT, 2024
** Parser
** File description:
** Created by antonyftp
*/

#include "loader.h"

static team_t *set_team_infos(char **splited_team, user_list_t *users, channel_list_t *channels)
{
    team_t *teams_infos = malloc(sizeof(team_t));
    char **splitted_users = NULL;
    char **splitted_channels = NULL;
    uuid_t channel_uuid;

    teams_infos->title = strdup(splited_team[0]);
    uuid_parse(splited_team[1], teams_infos->id);
    teams_infos->description = strdup(splited_team[2]);
    splitted_users = split_string(splited_team[3], ",\n");
    splitted_channels = split_string(splited_team[4], ",\n");
    teams_infos->owner = find_user_by_name(users, splitted_users[0]);
    teams_infos->users = NULL;
    teams_infos->channels = NULL;
    for (int i = 0; i < tab_len(splitted_users); i++) {
        teams_infos->users = add_node(teams_infos->users, find_user_by_name(users, splitted_users[i]));
    }
    for (int i = 0; i < tab_len(splitted_channels); i++) {
        uuid_parse(splitted_channels[i], channel_uuid);
        teams_infos->channels = add_node(teams_infos->channels, find_channel_by_uuid(channels, channel_uuid));
    }
    free_tab(splitted_users);
    free_tab(splitted_channels);
    return (teams_infos);
}

team_list_t *load_teams(user_list_t *users, channel_list_t *channels)
{
    team_list_t *team_list_head = NULL;
    FILE *file = open_file(TEAMS_FILEPATH, "r");
    size_t size = 0;
    char *line = NULL;
    char **splitted_team = NULL;

    getline(&line, &size, file);
    while (getline(&line, &size, file) != -1) {
        splitted_team = split_string(line, ";\n");
        team_list_head = add_node(team_list_head, set_team_infos(splitted_team, users, channels));
        free_tab(splitted_team);
    }
    free(line);
    fclose(file);
    return (team_list_head);
}