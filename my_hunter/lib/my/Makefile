##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## automatic lib
##

SRC	=	my_compute_power_it.c		\
		my_compute_power_rec.c		\
		my_compute_square_root.c	\
		my_find_prime_sup.c		\
		my_getnbr.c			\
		my_is_prime.c			\
		my_isneg.c			\
		my_put_nbr.c			\
		my_putchar.c			\
		my_putstr.c			\
		my_revstr.c			\
		my_showmem.c			\
		my_showstr.c			\
		my_sort_int_array.c		\
		my_str_isalpha.c		\
		is_lower.c			\
		my_str_isnum.c			\
		my_str_isprintable.c		\
		my_str_isupper.c		\
		my_strcapitalize.c		\
		my_strcat.c			\
		my_strcmp.c			\
		my_strcpy.c			\
		my_strlen.c			\
		my_strlowcase.c			\
		my_strncat.c			\
		my_strncmp.c			\
		my_strncpy.c			\
		my_strstr.c			\
		my_strupcase.c			\
		my_str_to_word_array.c		\
		my_swap.c			\
		is_lower.c			\
		my_strdup.c 		\
		my_get_len_int.c 		\
		my_itoa.c 			\

OBJ = $(SRC:.c=.o)

NAME = libmy.a

all: $(NAME)

$(NAME):
		gcc -c $(SRC)
		ar rc libmy.a $(NAME) $(OBJ)

clean:
		rm -f $(OBJ)

fclean :
		rm -f $(NAME)

supp:
		rm -f $(OBJ)
		rm -f $(NAME)

re: fclean all
