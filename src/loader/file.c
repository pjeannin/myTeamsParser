/*
** EPITECH PROJECT, 2024
** Parser
** File description:
** Created by antonyftp
*/

#include "loader.h"

FILE *open_file(char *filepath, char *mode)
{
    if (check_file(filepath) == -1)
        return ((FILE *)-1);
    FILE *file = fopen(filepath, mode);
    if (!file)
        return ((FILE *)-1);
    return (file);
}

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