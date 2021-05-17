cmake_minimum_required(VERSION 3.19)
project(Parser)

set(CMAKE_C_STANDARD 11)

include_directories(includes)

add_executable(writer
        includes/user.h
        src/loader/load_users.c
        src/loader/split_string.c
        includes/linked_list.h
        src/linked_list.c
        src/writer/add_new.c
        includes/writer.h
        src/writer/check_file.c
        src/writer/uuid_to_char.c
        src/writer/main.c
        src/writer/open_file.c
        src/writer/splt_private_message_file.c)