//
// Created by Pierre Jeannin on 14/05/2021.
//

#ifndef MYTEAMSPARSER_LINKED_LIST_H
#define MYTEAMSPARSER_LINKED_LIST_H

#include "linked_list.h"

typedef struct linked_list_s {
    void *data;
    struct linked_list_s *next;
} linked_list_t;

struct thread_t {
    char *original_post;
    char **answers;
    struct thread_t *next;
    struct user_t *users;
    uuid_t id;
};

struct channel_t {
    struct thread_t *threads;
    struct user_t *users;
    struct client_t owner;
    struct channel_t *next;
    uuid_t id;
};

struct team_t {
    struct channel_t *channels;
    struct user_t *users;
    struct team_t *next;
    uuid_t id;
};

struct user_t {
    uuid_t id;
    char *username;
    struct user_t *next;
};

#endif //MYTEAMSPARSER_LINKED_LIST_H
