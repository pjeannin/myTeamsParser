/*
** EPITECH PROJECT, 2024
** myTeams_Parser
** File description:
** Created by antonyftp
*/

#include "loader.h"

static void set_private_messages_timestamp(char *timestamp)
{

}

static message_t *set_private_messages(char **splitted_message, user_list_t *users, char *new_line, FILE *file)
{
    message_t *message = malloc(sizeof(message_t));
    char *line = NULL;
    size_t size = 0;

    getline(&line, &size, file);
    message->sender = find_user_by_name(users, splitted_message[0]);
    message->message = strdup(splitted_message[1]);
    return (message);
}

static private_message_t *set_private_message_infos(char **splited_users, user_list_t *users, FILE *file)
{
    private_message_t *private_message = malloc(sizeof(private_message_t));
    char *line = NULL;
    char *new_line = NULL;
    size_t size = 0;
    char **splitted_message = NULL;

    private_message->first_user = find_user_by_name(users, splited_users[0]);
    private_message->second_user = find_user_by_name(users, splited_users[1]);
    for (int index = 0; getline(&line, &size, file) != -1 && strcmp(line, "\n") != 0; index++) {
        new_line = strdup(line);
        splitted_message = split_string(line, ":\n");
        private_message->message_list = add_node(private_message->message_list, set_private_messages(splitted_message, users, new_line, file));
        free_tab(splitted_message);
    }
}

private_message_list_t *load_privatemessages(user_list_t *users)
{
    private_message_list_t *private_messages_list_head = NULL;
    FILE *file = open_file(PRIVATEMESSAGES_FILEPATH, "r");
    size_t size = 0;
    char *line = NULL;
    char *new_line = NULL;
    char **splitted_users = NULL;

    getline(&line, &size, file);
    while (getline(&line, &size, file) != -1) {
        splitted_users = split_string(line, "-\n");
        private_messages_list_head = add_node(private_messages_list_head, set_private_message_infos(splitted_users, users, file));
        free_tab(splitted_users);
    }
    free(line);
    fclose(file);
    return (private_messages_list_head);
}