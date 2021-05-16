/*
** EPITECH PROJECT, 2021
** Project
** File description:
** check_file.c
*/

#include "../../includes/writer.h"

int check_file(char *filepath)
{
    FILE *file = fopen(filepath, "r");
    int ret_val = 0;
    char *line = NULL;
    size_t n = 0;

    if (!file)
        return (-1);
    if ((ret_val = getline(&line, &n, file)) == -1 || (ret_val == 1 && strcmp(KEY, line) != 0)) {
        fclose(file);
        return (-1);
    }
    fclose(file);
    return (0);
}