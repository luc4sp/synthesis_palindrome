/*
** EPITECH PROJECT, 2018
** palindrome.c
** File description:
** palindrome
*/

#include "palindrome.h"

void check_palindrome(parse_t *parse)
{
	if (strcmp(convert_base(parse, parse->palindrome),
		my_revstr(convert_base(parse, parse->palindrome))) != 0) {
		puts("invalid argument");
		exit(84);
	}
}

void iterate_p(char *result, parse_t *parse)
{
	parse->i = 0;
	int pal_max = atoi(result);
	char *i_str = NULL;
	parse->tmp = result;
	char *test;

	while (parse->i <= pal_max) {
		i_str = convert_int(parse->i);
		if (iteration(i_str, parse) != NULL) {
			test = iteration(i_str, parse);
			print_pal(parse, test);
		}
		parse->i++;
	}
}
