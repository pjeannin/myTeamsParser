/*
** EPITECH PROJECT, 2021
** Project
** File description:
** main.cpp
*/

#include "../../includes/writer.h"

int main(void)
{
    char *username = "jean";
    char *title = "Les copains";
    char *message = "Parfait";
    char *description = "Ici on est entre potes";
    uuid_t uuid;
    uuid_parse("689D4AB3-9396-4052-9D75-7B079A753C8F", uuid);

    if (team_unsubscribe(uuid, username) == -1)
        return (84);
    //set_channel_parent(uuid, "mon chan");
    return (0);
}