##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## Makefile
##

SRC	=	./game/my_defender.c	\
		./my_defender.h	\
		./game/set_and_print.c		\
		./game/close.c	\
		./game/monster/monster_1.c	\
		./game/mode/placer_mode.c	\
		./game/mode/fight_mode.c	\
		./game/mode/pause_mode.c	\
		./game/mode/menu_mode.c	\
		./game/placer/archer.c	\
		./game/placer/post.c	\
		./game/placer/tower.c	\
		./initial/init.c	\
		./initial/init_2.c	\
		./music/music.c	\

OBJ	=	$(SRC:.c=.o)

NAME	=	my_defender

all:	$(NAME)

$(NAME):	$(OBJ)
	gcc $(SRC) -Wall -Wextra -lcsfml-graphics -lcsfml-audio -lcsfml-window -I include -o $(NAME) -g

clean:
	rm game/*.o
	rm game/monster/*.o
	rm game/placer/*.o
	rm game/mode/*.o
	rm initial/*.o
	rm music/*.o

fclean: clean
	rm $(NAME)

re:	all
	make clean
