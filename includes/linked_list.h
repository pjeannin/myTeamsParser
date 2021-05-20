//
// Created by Pierre Jeannin on 14/05/2021.
//

#ifndef MYTEAMSPARSER_LINKED_LIST_H
#define MYTEAMSPARSER_LINKED_LIST_H

#include <uuid/uuid.h>
#include <stddef.h>
#include <stdlib.h>

typedef struct linked_list_s {
    void *data;
    struct linked_list_s *next;
} linked_list_t;

typedef linked_list_t user_list_t;
typedef linked_list_t message_list_t;
typedef linked_list_t thread_list_t;
typedef linked_list_t channel_list_t;
typedef linked_list_t team_list_t;
typedef  linked_list_t private_message_list_t;

typedef struct user_s {
    char *username;
    uuid_t id;
} user_t;

typedef struct message_s {
    user_t sender;
    char *message;
} message_t;

typedef struct thread_s {
    char *title;
    uuid_t id;
    user_t owner;
    char *original_post;
    message_list_t *message;
} thread_t;

typedef struct channel_s {
    char *title;
    uuid_t id;
    char *description;
    thread_list_t *threads;
} channel_t;

typedef struct team_s {
    char *title;
    uuid_t id;
    char *description;
    user_t owner;
    user_list_t *users;
    channel_list_t *channels;
} team_t;

typedef struct private_message_s {
    user_t first_user:
    user_t second_user;
    message_list_t *message_list;
} private_message_t;

linked_list_t *add_node(linked_list_t *list_head, void *data);
void *find_user_by_uuid(linked_list_t *list_head, uuid_t uuid);
void *find_thread_by_uuid(linked_list_t *list_head, uuid_t uuid);
void *find_channel_by_uuid(linked_list_t *list_head, uuid_t uuid);
void *find_team_by_uuid(linked_list_t *list_head, uuid_t uuid);

#endif //MYTEAMSPARSER_LINKED_LIST_H
