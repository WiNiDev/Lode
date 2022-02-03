##
## EPITECH PROJECT, 2018
## MAKEFILE
## File description:
## script for compil all your lib
##
SRC =	src/display/my_runner.c	\
	src/init/first_init.c	\
	src/init/second_init.c	\
	src/move/first_move.c	\
	src/move/second_move.c	\
	src/move/third_move.c	\
	src/move/four_move.c	\
	src/clock/clock.c	\
	src/window/window.c	\
	src/window/window_two.c	\
	src/score/score.c	\
	src/music/music.c	\
	src/music/music_two.c	\
	src/restart/restart.c	\
	src/setting/setting.c	\
	src/menu/menu.c	\
	src/draw/draw.c	\
	src/main/main.c	\
	lib/my_putchar.c	\
	lib/my_putstr.c	\
	lib/my_itoa.c

NAME =	my_runner

all:	$(NAME)

$(NAME):
		gcc -o $(NAME) $(SRC) -lcsfml-window -lcsfml-graphics -lcsfml-system -lcsfml-audio

clean:
		rm -f $(OBJ)

fclean:
		rm -f $(NAME)

re:	fclean all
