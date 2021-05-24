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
    thread_list_t *thread = load_thread(users);
    printf("Thread :\n");
    printf("%s\n", ((thread_t *)thread->data)->title);
    printf("%s\n", ((thread_t *)thread->data)->owner->username);
    printf("%s\n", ((thread_t *)thread->data)->original_post);
    printf("%s\n", ((message_t *)((thread_t *)thread->data)->message->data)->sender->username);
    printf("%s\n", ((message_t *)((thread_t *)thread->data)->message->data)->message);
    return (0);
}