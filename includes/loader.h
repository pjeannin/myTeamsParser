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

#define USERS_FILEPATH  "savefiles/users.cache"
#define KEY "68768767546534765356-myteams"

char **split_string(char *str, char *tok);
void free_tab(char **tab);
int tab_len(char **tab);
FILE *open_file(char *filepath, char *mode);
int check_file(char *filepath);

/**
 * @brief Must be called when initializing the server in order to load saved
 * users
 * @return A linked list which contain all saved users
 */
struct user_t *load_users();

#endif //PARSER_USER_H
