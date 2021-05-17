/*
** EPITECH PROJECT, 2021
** Project
** File description:
** splt_private_message_file.c
*/

#include "../../includes/writer.h"

char *concat_str(char *str1, char *str2)
{
    char *res = malloc(sizeof(char) * (strlen(str1) + strlen(str2 + 1)));

    for (int i = 0; str1[i]; ++i)
        res[i] = str1[i];
    for (int i = 0; str2[i]; ++i)
        res[i + strlen(str1)] = str2[i];
    res[strlen(str1) + strlen(str2)] = '\0';
    return (res);
}

static void add_line_to_var(char *file_content, char *line, int *index)
{
    for (int i = 0; line[i]; ++i) {
        file_content[*(index++) + i] = line[i];
    }
}

static void fill_file_content_var(char *file_begening, char *file_end, FILE *file, char **names_tab)
{
    int index = 0;
    int end = 0;
    char *line;
    int right_conv = 0;
    size_t size;

    while (getline(&line, &size, file) != -1) {
        if (!strcmp(line, names_tab[0]) || !strcmp(line, names_tab[1]))
            right_conv = 1;
        else if (!strcmp(line, "\n") && right_conv) {
            end = 1;
            file_begening[index] = '\0';
            index = 0;
        }
        add_line_to_var((end ? file_end : file_begening), line, &index);
    }
    file_end[index] = '\0';
}

char *find_private_message_first_part(char *first_name, char *second_name)
{
    FILE *file = open_file(PRIVATE_MESSAGE_PATH, "r");
    char *file_begening = NULL;
    char *file_end = NULL;
    char *names_tab[2] = {concat_str(first_name, concat_str("-", second_name)),
        concat_str(second_name, concat_str("-", first_name))};
    struct stat st;

    if (file == (FILE *)-1)
        return (NULL);
    stat(PRIVATE_MESSAGE_PATH, &st);
    file_begening = malloc(sizeof(char) * 300);
    file_end = malloc(sizeof(char) * 300);
    fill_file_content_var(file_begening, file_end, file, names_tab);
    fclose(file);
    return (file_begening);
}