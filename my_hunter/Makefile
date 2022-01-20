##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## nothing
##

SRC =	src/main.c 					\
		src/usage.c 				\
		src/hunter.c 				\
		src/window_gestion.c 		\
		src/interaction_gestion.c 	\
		src/destroy_gestion.c 		\
		src/duck_gestion.c 			\
		src/display_gestion.c 		\
		src/cursor_gestion.c 		\
		src/score_gestion.c			\
		src/destroy_gestion2.c 		\
		src/life_gestion.c 			\
		src/display_gestion2.c 		\
		src/data_gestion.c 			\
		src/action_gestion.c 		\
		src/pause_gestion.c 		\
		src/music_gestion.c 		\
		src/duck_gestion2.c 		\
		src/end_gestion.c 			\
		src/text_gestion.c 			\
		src/display_gestion3.c 		\

OBJ =	$(SRC:.c=.o)

EXT = -lcsfml-graphics -lcsfml-window -lcsfml-audio -lcsfml-system

BINARY = my_hunter

all:	$(BINARY)

$(BINARY):	$(OBJ)
	$(MAKE) -C ./lib/my
	gcc -o $(BINARY) $(OBJ) $(EXT) -L./lib/my -lmy -I./include

clean:
	rm -f $(OBJ)

fclean:
	rm -f $(BINARY)

re: fclean all