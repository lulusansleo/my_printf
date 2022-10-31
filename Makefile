##
## EPITECH PROJECT, 2022
## Luan BOURBIER
## File description:
## Makefile n 1
##

SRC			=	./lib/my/my_compute_power_rec.c \
				./lib/my/my_compute_square_root.c \
				./lib/my/my_find_prime_sup.c \
				./lib/my/my_getnbr.c \
				./lib/my/my_is_prime.c \
				./lib/my/my_isneg.c \
				./lib/my/my_put_nbr.c \
				./lib/my/my_putchar.c \
				./lib/my/my_putstr.c \
				./lib/my/my_revstr.c \
				./lib/my/my_sort_int_array.c \
				./lib/my/my_str_to_word_array.c\
				./lib/my/my_str_isalpha.c \
				./lib/my/my_str_islower.c \
				./lib/my/my_str_isnum.c \
				./lib/my/my_str_isprintable.c \
				./lib/my/my_str_isupper.c \
				./lib/my/my_strcapitalize.c \
				./lib/my/my_strcat.c \
				./lib/my/my_strcmp.c \
				./lib/my/my_strcpy.c \
				./lib/my/my_strlen.c \
				./lib/my/my_strlowcase.c \
				./lib/my/my_strncat.c \
				./lib/my/my_strncmp.c \
				./lib/my/my_strncpy.c \
				./lib/my/my_strstr.c \
				./lib/my/my_strupcase.c \
				./lib/my/my_swap.c \
				source/main_file.c\
				source/wrapper.c\
				source/wrapper_second.c\
				source/flags_order.c\
				source/wrapper_third.c\
				source/print_funct.c\
				source/get_flags.c\
				source/do_flags.c\
				source/what_pad.c\
				source/add_flag_len.c\
				source/my_put_float.c\
				source/scientific.c\
				source/big_scientific.c\
				source/flag_g.c
O_FILES		=	*.o

OBJ			=	$(SRC:.c=.o)

MYH			=	my.h

LIBNAME		=	libmy.a

CPPFLAGS	=	-Wall -Wextra

all:	build

build:	$(OBJ)
	gcc -c $(SRC)
	ar rc $(LIBNAME) $(OBJ)

clean:
	$(RM) -f $(O_FILES) $(OBJ)

fclean:	clean
	$(RM) -f $(LIBNAME)

re:	fclean all

.PHONY:	all build clean fclean re
