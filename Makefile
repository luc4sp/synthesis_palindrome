##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## 
##

CC	=	gcc -W -Wall -Wextra -fdiagnostics-color=auto

SRC	=	sources/check_arg.c	\
		sources/convert_base.c	\
		sources/iterate.c	\
		sources/print_line.c	\
		sources/error_mngmt.c	\
		sources/error_i.c	\
		sources/palindrome.c	\
		sources/split.c		\
		sources/main.c

CFLAGS	=	-I./include/ -g

OBJ	=	$(SRC:.c=.o)

NAME	=	palindrome

all:	$(NAME)

$(NAME):	$(OBJ)
	@$(CC) -o $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

exe:
	gcc $(OBJ) -o $(NAME)

re:	fclean all
