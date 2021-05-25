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
    printf("----- User : -----\n");
    printf("%s\n", ((user_t *)users->next->next->data)->username);
    thread_list_t *thread = load_thread(users);
    printf("----- Thread : -----\n");
    printf("%s\n", ((thread_t *)thread->data)->title);
    printf("%s\n", ((thread_t *)thread->data)->owner->username);
    printf("%s\n", ((thread_t *)thread->data)->original_post);
    printf("%s\n", ((message_t *)((thread_t *)thread->data)->message->data)->sender->username);
    printf("%s\n", ((message_t *)((thread_t *)thread->data)->message->data)->message);
    channel_list_t *channel = load_channel(thread);
    printf("----- Channel : -----\n");
    printf("%s\n", ((channel_t *)channel->data)->title);
    printf("%s\n", ((channel_t *)channel->data)->description);
    printf("%s\n", ((thread_t *)((channel_t *)channel->data)->threads->data)->title);
    team_list_t *team = load_teams(users, channel);
    printf("----- Teams : -----\n");
    printf("%s\n", ((team_t *)team->data)->title);
    printf("%s\n", ((team_t *)team->data)->description);
    printf("%s\n", ((user_t *)((team_t *)team->data)->owner)->username);
    printf("%s\n", ((user_t *)((team_t *)team->data)->users->data)->username);
    printf("%s\n", ((channel_t *)((team_t *)team->data)->channels->data)->title);
    printf("----- Private Messages : -----\n");
    private_message_list_t *message = load_privatemessages(users);
    printf("%s\n", ((message_t *)((private_message_t *)message->data)->message_list->data)->message);
    return (0);
}