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
			sources/sound.c	\
			sources/itoa.c 	\

PLAYER 	= 	sources/player/hud.c				\
			sources/player/player.c				\
			sources/player/level.c				\

PNJ =		sources/pnj/pnj.c					\
			sources/pnj/msgbox.c				\
			sources/pnj/init_pnj.c				\

PAUSE	=	sources/pause/pause.c						\
			sources/pause/pause_animation.c				\
			sources/pause/pause_content.c				\
			sources/pause/pause_init_content.c			\
			sources/pause/pause_text_init.c				\

ANIMATION	=	sources/animation/animation.c			\
				sources/animation/select_rect.c			\


MAP		=	sources/map/map.c							\
			sources/map/init_map.c						\

MOVE	=	sources/movements/move.c					\

COLLISION	=	sources/collision/collision.c					\
				sources/collision/collide_settings.c			\
				sources/collision/set_map_collision/set_col1.c	\
				sources/collision/set_map_collision/set_col2.c	\
				sources/collision/set_map_collision/set_col3.c	\

ENNEMY		=	sources/ennemy/ennemy.c					\
				sources/ennemy/init_ennemy.c			\
				sources/ennemy/init_ennemy_attack.c		\
				sources/ennemy/bad_girl_pattern.c		\
				sources/ennemy/skull_bow_pattern.c		\
				sources/ennemy/mob_attack.c				\
				sources/ennemy/wait_for_new_attack.c	\

METEO		=	sources/meteo/neige.c					\
				sources/meteo/pluie.c					\

ITEM		=	sources/items/init_item.c				\
				sources/items/keys_handle.c				\

CC	=	@gcc

CFLAGS	=	-I ./includes/ -l csfml-window -l csfml-graphics -l csfml-system -lcsfml-audio -g3 -Ofast

OBJ	= 	$(SRC:.c=.o)		\
		$(PAUSE:.c=.o) 		\
		$(ANIMATION:.c=.o)	\
		$(MAP:.c=.o)		\
		$(MOVE:.c=.o)		\
		$(PLAYER:.c=.o)		\
		$(COLLISION:.c=.o)	\
		$(ENNEMY:.c=.o)		\
		$(PNJ:.c=.o)		\
		$(METEO:.c=.o)		\
		$(ITEM:.c=.o)		\

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
