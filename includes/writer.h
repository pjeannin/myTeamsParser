//
// Created by Pierre Jeannin on 16/05/2021.
//

#ifndef MYTEAMSPARSER_WRITER_H
#define MYTEAMSPARSER_WRITER_H

#include <uuid/uuid.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define USER_PATH "savefiles/users.cache"
#define THREAD_PATH "savefiles/threads.cache"
#define TEAM_PATH "savefiles/teams.cache"
#define PRIVATE_MESSAGE_PATH "savefiles/privatemessages.cache"
#define CHANNEL_PATH "savefiles/channels.cache"
#define KEY "68768767546534765356-myteams"

int check_file(char *filepath);
int add_user(char *username, uuid_t uuid);

#endif //MYTEAMSPARSER_WRITER_H
