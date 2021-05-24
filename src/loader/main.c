/*
** EPITECH PROJECT, 2021
** Project
** File description:
** main.c
*/

#include "../../includes/loader.h"

int main()
{
    user_list_t *users = load_users();
    printf("User :\n");
    printf("%s\n", ((user_t *)users->next->next->data)->username);
    thread_list_t *thread = load_thread();
    printf("Thread :\n");
    printf("%s\n", ((thread_t *)thread->next->data)->title);
    return (0);
}