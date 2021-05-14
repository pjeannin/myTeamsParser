cmake_minimum_required(VERSION 3.19)
project(Parser)

set(CMAKE_C_STANDARD 11)

add_executable(parser
        src/main.c includes/user.h src/loader/load_users.c src/loader/split_string.c includes/linked_list.h src/linked_list.c)