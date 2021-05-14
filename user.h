//
// Created by Pierre Jeannin on 14/05/2021.
//

#ifndef PARSER_USER_H
#define PARSER_USER_H

#include <uuid/uuid.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "linked_list.h"

#define USERS_FILEPATH  "savefiles/cache_users.txt"
#define KEY "68768767546534765356-myteams"

typedef struct user_infos_s {
    char *username;
    uuid_t uuid;
} user_infos_t;

void linked_list_add_elem(linked_list_t *list_head, void *data);
char **split_string(char *str, char *tok);
void free_tab(char **tab);
int tab_len(char **tab);

#endif //PARSER_USER_H
