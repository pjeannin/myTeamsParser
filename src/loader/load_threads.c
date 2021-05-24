/*
** EPITECH PROJECT, 2024
** Parser
** File description:
** Created by antonyftp
*/

#include "loader.h"

static void set_answer_infos(char *owner, thread_t *thread, user_list_t *users, char *new_line)
{
    message_t *message = malloc(sizeof(message_t));

    for (; *new_line != ','; ++new_line);
    ++new_line;
    message->sender = find_user_by_name(users, owner);
    message->message = strdup(new_line);
    thread->message = add_node(thread->message, message);
}

static thread_t *set_thread_infos(char **splited_thread, user_list_t *users)
{
    thread_t *thread_infos = malloc(sizeof(thread_t));
    thread_infos->title = strdup(splited_thread[0]);
    uuid_parse(splited_thread[1], thread_infos->id);
    thread_infos->owner = find_user_by_name(users, splited_thread[2]);
    thread_infos->original_post = strdup(splited_thread[3]);

    return (thread_infos);
}

thread_list_t *load_thread(user_list_t *users)
{
    thread_list_t *thread_list_head = NULL;
    FILE *file = open_file(THREADS_FILEPATH, "r");
    size_t size = 0;
    uuid_t tmp;
    char *line = NULL;
    char *new_line = NULL;
    char **splitted_thread = NULL;
    char **splitted_answer = NULL;

    getline(&line, &size, file);
    while (getline(&line, &size, file) != -1) {
        splitted_thread = split_string(line, ";\n");
        thread_list_head = add_node(thread_list_head, set_thread_infos(splitted_thread, users));
        ((thread_t *)thread_list_head->data)->message = NULL;
        for (int index = 0; getline(&line, &size, file) != -1 && strcmp(line, "\n") != 0; index++) {
            new_line = strdup(line);
            splitted_answer = split_string(line, ",\n");
            uuid_parse(splitted_thread[1], tmp);
            set_answer_infos(splitted_answer[0], find_thread_by_uuid(thread_list_head, tmp), users, new_line);
            free_tab(splitted_answer);
        }
        free_tab(splitted_thread);
    }

    return(thread_list_head);
}