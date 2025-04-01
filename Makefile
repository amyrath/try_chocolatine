##
## EPITECH PROJECT, 2025
## Makefile
## File description:
## Makefile
##

SRC	=	*.c

NAME	=	mysh

SRCC	=	my_strlen.c

all:
	gcc -o $(NAME) $(SRC) -g3

clean:
	rm -f  $(NAME)
	rm -f *#
	rm -f *~
	rm -f src/*~
	rm -f include/*~
	rm -f src/*#
	rm -f *gc*
	rm -f coding-style-reports.log
	rm -f uni_tests

fclean: clean

re:	fclean all

tests_run:
	gcc -o uni_tests $(SRCC) tests/*.c -lcriterion --coverage
	./uni_tests
