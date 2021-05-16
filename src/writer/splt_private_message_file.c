/*
** EPITECH PROJECT, 2021
** Project
** File description:
** splt_private_message_file.c
*/

#include "../../includes/writer.h"

static void fill_file_content_var(char *file_content, FILE *file, char *first_name,
                                  char *second_name)
{
    int index = 0;

    file_content[index] = '\0';
}

char *find_private_message_first_part(char *first_name, char *seconde_name)
{
    FILE *file = open_file(PRIVATE_MESSAGE_PATH, "r");
    char *file_content = NULL;
    struct stat st;

    if (file == (FILE *)-1)
        return (NULL);
    stat(PRIVATE_MESSAGE_PATH, &st);
    file_content = malloc(sizeof(char) * st.st_size);
    fill_file_content_var(file_content, file, first_name, seconde_name);
    return (file_content);
}