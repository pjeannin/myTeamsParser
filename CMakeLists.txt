cmake_minimum_required(VERSION 3.19)
project(Parser)

set(CMAKE_C_STANDARD 11)

include_directories(includes)

add_executable(lists
        includes/linked_list.h
        src/lists/channel_list.c
        src/lists/team_list.c
        src/lists/thread_list.c
        src/lists/users_list.c)

add_executable(loader
        includes/user.h
        src/loader/main.c
        src/loader/load_users.c
        src/loader/split_string.c
        src/loader/linked_list.c)

add_executable(writer
        includes/writer.h
        src/writer/add_new.c
        src/writer/check_file.c
        src/writer/open_file.c
        src/writer/splt_private_message_file.c src/loader/main.c)