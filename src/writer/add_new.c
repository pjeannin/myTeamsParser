/*
** EPITECH PROJECT, 2021
** Project
** File description:
** add_user.c
*/

#include "../../includes/writer.h"

int add_user(char *username, uuid_t uuid)
{
    FILE *file = open_file(USER_PATH, "a");
    char *char_uuid;

    if (file == (FILE *)-1)
        return (-1);
    char_uuid = malloc(sizeof (char) * 37);
    uuid_unparse_upper(uuid, char_uuid);
    fprintf(file, "\n%s;%s", username, char_uuid);
    fclose(file);
    free(char_uuid);
    return (0);
}

int add_thread(char *title, uuid_t uuid, char *owner, char *message)
{
    FILE *file = open_file(THREAD_PATH, "a");
    char *char_uuid;

    if (file == (FILE *)-1)
        return (-1);
    char_uuid = malloc(sizeof(char) * 37);
    uuid_unparse_upper(uuid, char_uuid);
    fprintf(file, "\n%s;%s;%s;%s\n", title, char_uuid, owner, message);
    fclose(file);
    free(char_uuid);
    return (0);
}

int add_team(char *title, uuid_t uuid, char *description, char *owner)
{
    FILE *file = open_file(TEAM_PATH, "a");
    char *char_uuid;

    if (file == (FILE *)-1)
        return (-1);
    char_uuid = malloc(sizeof(char) * 37);
    uuid_unparse_upper(uuid, char_uuid);
    fprintf(file, "\n%s;%s;%s;%s;", title, char_uuid, description, owner);
    fclose(file);
    free(char_uuid);
    return (0);
}

int add_channel(char *title, uuid_t uuid, char *description, char *owner)
{
    FILE *file = open_file(CHANNEL_PATH, "a");
    char *char_uuid;

    if (file == (FILE *)-1)
        return (-1);
    char_uuid = malloc(sizeof(char) * 37);
    uuid_unparse_upper(uuid, char_uuid);
    fprintf(file, "\n%s;%s;%s;%s;", title, char_uuid, description, owner);
    fclose(file);
    free(char_uuid);
    return (0);
}

int add_private_message(char *first, char *second, char *message,
                        time_t timestamp)
{
    char *beg = NULL;
    char *end = NULL;
    FILE *file = NULL;
    char buf[21];

    find_private_message_part(first, second, &beg, &end);
    file = open_file(PRIVATE_MESSAGE_PATH, "w");
    if (file == (FILE *)-1)
        return (-1);
    strftime(buf, 20, "%Y-%m-%d %H:%M:%S", localtime(&timestamp));
    buf[20] = '\0';
    fprintf(file, "%s", beg);
    if (!strcmp(end, "")) {
        fprintf(file, "\n\n%s-%s\n", first, second);
    }
    fprintf(file, "%s:%s\n%s\n%s", first, message, buf, end);
    fclose(file);
    free(beg);
    free(end);
    return (0);
}