##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## Makefile
##


SRC	=		main.c 	\
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
			sources/my_strlen.c \
			sources/parameters.c \
			sources/getinfo.c \
			sources/intro.c \
			sources/sound.c

PLAYER 	= 	sources/player/hud.c

PAUSE	=	sources/pause/pause.c				\
			sources/pause/pause_animation.c		\
			sources/pause/pause_content.c		\
			sources/pause/pause_init_content.c	\
			sources/pause/pause_text_init.c		\

ANIMATION	=	sources/animation/animation.c	\
				sources/animation/select_rect.c	\

MAP		=	sources/map/map.c					\
			sources/map/init_map.c				\

MOVE	=	sources/movements/move.c			\

CC	=	@gcc

CFLAGS	=	-I ./includes/ -l csfml-window -l csfml-graphics -l csfml-system -lcsfml-audio -g3 -Ofast

OBJ	= 	$(SRC:.c=.o)		\
		$(PAUSE:.c=.o) 		\
		$(ANIMATION:.c=.o)	\
		$(MAP:.c=.o)		\
		$(MOVE:.c=.o)		\
		$(PLAYER:.c=.o)		\

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
