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
    printf("User :\n");
    printf("%s\n", users->next->next->username);
    struct thread_t *thread = load_thread();
    printf("Thread :\n");
    printf("%s\n", thread->next->title);
    return (0);
}