/*
** EPITECH PROJECT, 2024
** Parser
** File description:
** Created by antonyftp
*/

#include "loader.h"

static void set_answer_infos(char **splited_line, thread_t *thread, int index)
{

}

static thread_t *set_thread_infos(char **splited_line)
{
    thread_t *thread_infos = malloc(sizeof(thread_t));
    thread_infos->title = strdup(splited_line[0]);
    uuid_parse(splited_line[1], thread_infos->id);

    return (thread_infos);
}

thread_list_t *load_thread(void)
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
        thread_list_head = add_node(thread_list_head, set_thread_infos(splitted_thread));
        getline(&line, &size, file);
        //new_line = strdup(line);
        for (int index = 0; getline(&line, &size, file) != -1 && strcmp(line, "\n") != 0; index++) {
            splitted_answer = split_string(line, ",\n");
            uuid_parse(splitted_thread[1], tmp);
            set_answer_infos(splitted_answer, find_thread_by_uuid(thread_list_head, tmp), index);
            free_tab(splitted_answer);
        }
        free_tab(splitted_thread);
    }

    return(thread_list_head);
}