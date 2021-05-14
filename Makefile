##
## EPITECH PROJECT, 2021
## B-NWP-400-STG-4-1-myteams-antony.fantapie
## File description:
## Main Makefile
##

WRITER	=	src/writer/
LOADER	=	src/loader/

all: writer loader

writer:
	@ make -C $(WRITER) -s

loader:
	@ make -C $(LOADER) -s

clean:
	@ make clean -C $(WRITER) -s
	@ make clean -C $(LOADER) -s

fclean:
	@ make fclean -C $(WRITER) -s
	@ make fclean -C $(LOADER) -s

re:
	@ make re -C $(WRITER) -s
	@ make re -C $(LOADER) -s

.PHONY: all server client clean fclean re