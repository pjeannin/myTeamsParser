/*
** EPITECH PROJECT, 2021
** Project
** File description:
** open_file.c
*/

#include "../../includes/writer.h"

FILE *open_file(char *filepath, char *mode)
{
    if (check_file(filepath) == -1)
        return ((FILE *)-1);
    FILE *file = fopen(filepath, mode);
    if (!file)
        return ((FILE *)-1);
    return (file);
}