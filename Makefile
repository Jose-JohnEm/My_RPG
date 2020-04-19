##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## Makefile
##


SRC	=	main.c 	\
		sources/my_putstr.c	\
		sources/my_putchar.c	\
		sources/init.c	\
		sources/destroy.c	\
		sources/window.c 	\
		sources/menu.c 	\
		sources/event.c	\
		sources/music.c \
		sources/cloud.c \
		sources/exit.c \
		sources/end.c	\
		sources/start.c \
		sources/inventory.c	\


PAUSE	=	sources/pause/pause.c				\
			sources/pause/pause_animation.c		\
			sources/pause/pause_content.c		\
			sources/pause/pause_init_content.c	\
			sources/pause/pause_text_init.c		\
 
CC	=	@gcc

CFLAGS	=	-I ./includes/ -l csfml-window -l csfml-graphics -l csfml-system -lcsfml-audio -g3 -Ofast

OBJ	= 	$(SRC:.c=.o) $(PAUSE:.c=.o)

NAME	=	my_rpg

all:		$(OBJ)
	@gcc -o $(NAME) $(OBJ) $(CFLAGS) -lm

clean:
	@rm -f $(OBJ)
	@echo CLEAN

fclean: clean
	@rm -f $(NAME)
	@echo FCLEAN

re:	fclean all
	@echo RE
