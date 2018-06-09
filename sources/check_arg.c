/*
** EPITECH PROJECT, 2018
** check_arg.c
** File description:
** check_arg
*/

#include "palindrome.h"

void init(parse_t *parse)
{
	parse->base = 10;
	parse->number = NULL;
	parse->palindrome = NULL;
	parse->bal_number = 0;
	parse->bal_pal = 0;
	parse->final = NULL;
	parse->maximum = 100;
	parse->minimum = 0;
}

void help(void)
{
	puts("USAGE\n"
		"     ./palindrome -n number -p palindrome [-b base] [-imin i] "
		"[-imax i]\n\n"
		"DESCRIPTION\n"
		"      -n n     integer to be transformed (>=0)\n"
		"      -p pal   palindromic number to be obtained"
		" (incompatible with the -n\n"
		"               option) (>=0)\n"
		"               if defined, all fitting values of n"
		" will be output\n"
		"      -b base  base in wich the procedure will be"
		" executed (1<b<=10)"
		" [def: 10]\n"
		"      -imin i  minimum number of iterations, included (>=0)"
		" [def: 0]\n"
		"      -imax i  maximum number of iterations, included (>=0)"
		" [def: 100]");
}

int search(parse_t *parse)
{
	char *result = NULL;

	if (parse->number == NULL && parse->palindrome == NULL)
		parse->co = 1;
	split(parse);
	if (parse->bal_pal == 1) {
		check_palindrome(parse);
		result = convert_base(parse, parse->palindrome);
		iterate_p(result, parse);
	}
	return (0);
}

void loop(char **array, int i, parse_t *parse)
{
	if (strcmp(array[i], "-p") == 0)
		p_flag(array[i + 1], parse);
	else if (strcmp(array[i], "-b") == 0)
		b_flag(array[i + 1], parse);
}

int check_arg(char **array, parse_t *parse)
{
	int i = 0;

	init(parse);
	while (array[i]) {
		if (strcmp(array[i], "-n") == 0)
			n_flag(array[i + 1], parse);
		loop(array, i, parse);
		i++;
	}
	i = 0;
	while (array[i]) {
		if (strcmp(array[i], "-imin") == 0)
			imin_flag(array[i + 1], parse);
		else if (strcmp(array[i], "-imax") == 0)
			imax_flag(array[i + 1], parse);
		i++;
	}
	search(parse);
	return (0);
}
