##
## EPITECH PROJECT, 2020
## B-NWP-400-STG-4-1-myteams-antony.fantapie
## File description:
## Server Makefile
##

PROJECT	=	Writer
NAME	=	../../writer

SRCS	=	$(shell find ./ -name '*.c')

OBJS	=	$(SRCS:.c=.o)


CFLAGS	+=	-I../../includes/
CFLAGS	+=	-g3

LDFLAGS	+= -luuid


SHELL	=	/bin/bash
PRINT	=	printf "\033[0;36m$(PROJECT) \033[0;34m▷ \033[0m" ; printf
RM	=	rm -f
CC	=	gcc

RESET	=	\033[0m
RED	=	\033[0;31m
GREEN	=	\033[0;32m
YELLOW	=	\033[0;35m
BLUE	=	\033[0;34m
MAGENTA	=	\033[0;35m
CYAN	=	\033[1;36m


all: $(NAME)

$(NAME): prebuild $(OBJS) $(OBJLIB)
	@ $(PRINT) "$(YELLOW)%-40b$(RESET)" "Building writer"
	@ $(CC) -o $(NAME) $(OBJS) $(LDFLAGS) && \
	  (printf "$(GREEN)Done$(RESET)\n" ; exit 0) || \
	  (printf "$(RED)Fail$(RESET)\n" ; exit 1)

prebuild:
	@ $(PRINT) "$(YELLOW)%b$(RESET)\n" "Compiling files"

clean:
	@ $(PRINT) "$(YELLOW)%-40b$(RESET)" "Clean files"
	@ $(RM) $(OBJS)
	@ printf "$(GREEN)Done$(RESET)\n"

fclean: clean
	@ $(PRINT) "$(YELLOW)%-40b$(RESET)" "Clean $(NAME)"
	@ $(RM) $(NAME)
	@ printf "$(GREEN)Done$(RESET)\n"

re: fclean all

.c.o:
	@ $(CC) -c $< -o $@ $(CFLAGS) && \
	  ($(PRINT) "  $(GREEN)「✔」$(CYAN)  %b$(RESET)\n" $<) || \
	  ($(PRINT) "  $(RED)[XX]$(CYAN)  %b$(RESET)\n" $< ; exit 1)

.PHONY: all $(NAME) prebuild clean fclean re .c.o
