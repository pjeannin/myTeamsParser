/*
** EPITECH PROJECT, 2021
** B-NWP-400-STG-4-1-myteams-antony.fantapie
** File description:
** split_string
*/

#include "../../includes/writer.h"

char **split_string(char *str, char *tok)
{
    char *token = strtok(str, tok);
    char **tab = malloc(sizeof(char *));

    if (!str || !tab || !token)
        return (NULL);
    for (int i = 0; 1; ) {
        tab[i++] = strdup(token);
        tab = realloc(tab, (sizeof(char *) * (i + 1)));
        token = strtok(NULL, tok);
        if (token == NULL) {
            tab[i] = token;
            break;
        }
    }
    free(token);

    return (tab);
}

void free_tab(char **tab)
{
    for (int i = 0; tab[i]; ++i)
        free(tab[i]);
    free(tab);
}

int tab_len(char **tab)
{
    int len = 0;

    for (; tab[len]; ++len);

    return (len);
}