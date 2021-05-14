cmake_minimum_required(VERSION 3.19)
project(Parser)

set(CMAKE_C_STANDARD 11)

add_executable(parser
        main.c user.h load_clients.c split_string.c)