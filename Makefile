##
## EPITECH PROJECT, 2022
## B-MUL-200-REN-2-1-myrpg-marin.maurer
## File description:
## Makefile
##

SRC	=	src/my_animal_crossing/main.c \
		src/my_animal_crossing/malloc_game.c \
		src/my_animal_crossing/init_all.c \
		src/my_animal_crossing/event.c \
		src/my_animal_crossing/set_scene.c \
		src/my_animal_crossing/malloc_scene.c \
		src/my_animal_crossing/clocks_actions.c \
		src/my_animal_crossing/animation.c \
		src/my_animal_crossing/sound.c \
		src/my_animal_crossing/rect.c \
		src/game/init_game.c \
		src/game/event_game.c \
		src/magasin/init_magasin.c \
		src/magasin/event_magasin.c \
		src/pause/init_pause.c \
		src/pause/event_pause.c \
		src/menu/init_menu.c \
		src/menu/event_menu.c \
		src/menu/set_menu.c \
		src/menu/set_button_menu.c \
		src/menu/set_decors_menu.c

OBJ	=	$(SRC:.c=.o)

NAME	=	my_animal_crossing

CFLAGS	=	-Wall -Wextra -I include

LDFLAGS = -lcsfml-graphics -lcsfml-window -lcsfml-system -lcsfml-audio

all:	$(NAME)

$(NAME):	$(OBJ)
		gcc -o $(NAME) $(OBJ) $(CFLAGS) $(LDFLAGS)

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:	fclean all

debug:	CFLAGS += -g
debug:	re
