//
// Created by Pierre Jeannin on 14/05/2021.
//

#ifndef MYTEAMSPARSER_LINKED_LIST_H
#define MYTEAMSPARSER_LINKED_LIST_H

#include <uuid/uuid.h>
#include <stddef.h>

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
    struct user_t *owner;
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

struct team_t *add_teamnode(struct team_t *node, struct team_t *list);
struct team_t *remove_teamnode(uuid_t searched, struct team_t *list);
struct team_t *find_teamnode(uuid_t searched, struct team_t *list);
struct channel_t *add_channelnode(struct channel_t *node, struct channel_t *list);
struct channel_t *remove_channelnode(uuid_t searched, struct channel_t *list);
struct channel_t *find_channelnode(uuid_t searched, struct channel_t *list);
struct thread_t *add_threadnode(struct thread_t *node, struct thread_t *list);
struct thread_t *remove_threadnode(uuid_t searched, struct thread_t *list);
struct thread_t *find_threadnode(uuid_t searched, struct thread_t *list);
struct user_t *add_usernode(struct user_t *node, struct user_t *list);
struct user_t *remove_usernode(uuid_t searched, struct user_t *list);
struct user_t *find_usernode(uuid_t searched, struct user_t *list);
struct user_t *find_usernodebyname(char *searched, struct user_t *list);

#endif //MYTEAMSPARSER_LINKED_LIST_H
