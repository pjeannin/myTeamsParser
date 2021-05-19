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
#include <unistd.h>

#define USER_PATH "savefiles/users.cache"
#define THREAD_PATH "savefiles/threads.cache"
#define TEAM_PATH "savefiles/teams.cache"
#define PRIVATE_MESSAGE_PATH "savefiles/privatemessages.cache"
#define CHANNEL_PATH "savefiles/channels.cache"
#define KEY "68768767546534765356-myteams"

int check_file(char *filepath);
FILE *open_file(char *filepath, char *mode);

/**
** @brief Must be called when you create a new user
** @param username The username of the new user
** @param uuid The id of the new user
 * @return 0 when it successfully write in the file, otherwise -1
**/
int add_user(char *username, uuid_t uuid);

/**
** @brief Must be called when you create a new thread
** @param title The title of the new thread
** @param uuid The id of the new thread
 * @param owner The owner of the new thread
 * @param message The message of the new thread
 * @return 0 when it successfully write in the file, otherwise -1
**/
int add_thread(char *title, uuid_t uuid, char *owner, char *message);

/**
** @brief Must be called when you create a new team
** @param title The title of the new team
** @param uuid The id of the new team
 * @param description The description of the new team
 * @param owner The owner of the new team
 * @return 0 when it successfully write in the file, otherwise -1
**/
int add_team(char *title, uuid_t uuid, char *description, char *owner);

/**
** @brief Must be called when you create a new channel
** @param title The title of the new channel
** @param uuid The id of the new channel
 * @param description The description of the new channel
 * @param owner The owner of the new channel
 * @return 0 when it successfully write in the file, otherwise -1
**/
int add_channel(char *title, uuid_t uuid, char *description, char *owner);

/**
 * @brief Must be called when a user send a private message
 * @param first The username of the person who send the message
 * @param second The username of the person who receive the message
 * @param message The message
 * @param timestamp The timestamp of the message
 * @return 0 when it successfully write in the file, otherwise -1
 */
int add_private_message(char *first, char *second, char *message,
                        time_t timestamp);

/**
 * @breif Must be called when a user answer to a thread
 * @param uuid The id of the thread
 * @param username The username of the person how answer
 * @param answer The answer
 * @return 0 when it successfully write in the file, otherwise -1
 */
int add_thread_answer(uuid_t uuid, char *username, char* answer);

/**
 * @breif Must be called when a user subscribe to a team
 * @param uuid The id of the team
 * @param username The username of the user
 * @return 0 when it successfully write in the file, otherwise -1
 */
int team_subscribe(uuid_t uuid, char *username);

/**
 * @breif Must be called when a user subscribe to a channel
 * @param uuid The id of the channel
 * @param username The username of the user
 * @return 0 when it successfully write in the file, otherwise -1
 */
int channel_subscribe(uuid_t uuid, char *username);

void find_private_message_part(char *first_name, char *second_name,
                                     char **begening, char **end);
char **split_string(char *str, char *tok);
void free_tab(char **tab);
int tab_len(char **tab);
void add_line_to_var(char *file_content, char *line, int *index);

#endif //MYTEAMSPARSER_WRITER_H
