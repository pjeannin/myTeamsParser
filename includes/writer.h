//
// Created by Pierre Jeannin on 16/05/2021.
//

#ifndef MYTEAMSPARSER_WRITER_H
#define MYTEAMSPARSER_WRITER_H

#include <uuid/uuid.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>

#define USER_PATH "savefiles/users.cache"
#define THREAD_PATH "savefiles/threads.cache"
#define TEAM_PATH "savefiles/teams.cache"
#define PRIVATE_MESSAGE_PATH "savefiles/privatemessages.cache"
#define CHANNEL_PATH "savefiles/channels.cache"
#define KEY "68768767546534765356-myteams"

int check_file(char *filepath);
FILE *open_file(char *filepath, char *mode);
int add_user(char *username, uuid_t uuid);
int add_thread(char *title, uuid_t uuid, char *owner, char *message);
int add_team(char *title, uuid_t uuid, char *description, char *owner);
int add_channel(char *title, uuid_t uuid, char *description, char *owner);
int add_private_message(char *first, char *second, char *message,
                        time_t timestamp);
char *find_private_message_first_part(char *first_name, char *seconde_name);

#endif //MYTEAMSPARSER_WRITER_H
