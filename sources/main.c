/*
** EPITECH PROJECT, 2018
** main.c
** File description:
** main
*/

#include "palindrome.h"

int main(int argc, char **argv)
{
	parse_t *parse = malloc(sizeof(parse_t));
	parse->co = 0;
	int count = argc % 2;

	error_flag(argv);
	if (argc < 2 || count == 0) {
		puts("invalid argument");
		return (84);
	} else if (argc == 2 && strcmp(argv[1], "-h") == 0)
		help();
	else if (argc > 2) {
		check_arg(argv, parse);
		if (parse->co == 1) {
			puts("invalid argument");
			return (84);
		}
	}
	else
		return (84);
}
