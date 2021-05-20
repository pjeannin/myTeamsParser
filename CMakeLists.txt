cmake_minimum_required(VERSION 3.19)
project(Parser)

set(CMAKE_C_STANDARD 11)

include_directories(includes)

add_executable(lists
        includes/linked_list.h
        src/lists/channel_list.c
        src/lists/team_list.c
        src/lists/thread_list.c
        src/lists/users_list.c src/writer/channel_subscribe.c src/writer/add_thread_channel_to_upper.c src/writer/set_parent.c src/writer/team_unsubscribe.c src/writer/channel_unsubscribe.c)

add_executable(loader
        includes/loader.h
        src/loader/main.c
        src/loader/split_string.c
        src/loader/check_file.c
        src/loader/open_file.c
        src/loader/load_users.c
        src/loader/load_teams.c
        src/loader/load_threads.c
        src/loader/load_channel.c)

add_executable(writer
        includes/writer.h
        src/writer/add_new.c
        src/writer/check_file.c
        src/writer/open_file.c
        src/writer/split_string.c
        src/writer/splt_private_message_file.c src/writer/add_thread_reply.c src/writer/team_subscribe.c src/writer/channel_subscribe.c src/writer/add_thread_channel_to_upper.c src/writer/set_parent.c src/writer/team_unsubscribe.c src/writer/channel_unsubscribe.c)