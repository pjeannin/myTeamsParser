/*
** EPITECH PROJECT, 2021
** Project
** File description:
** main.c
*/

#include "../../includes/loader.h"

int main()
{
    struct user_t *users = load_users();

    printf("%s\n", users->next->next->username);
    return (0);
}