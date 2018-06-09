/*
** EPITECH PROJECT, 2018
** print_line.c
** File description:
** print_line
*/

#include "palindrome.h"

void print_line(parse_t *parse)
{
	if (parse->counter < parse->minimum) {
		puts("no solution");
		exit(0);
	} else
		printf("%s leads to %s in %d iteration(s) in base %d\n"
		, parse->number, parse->final, parse->counter, parse->base);
}

void print_pal(parse_t *parse, char *result)
{
	char *convert = NULL;

	if (parse->counter >= parse->minimum &&
		parse->counter <= parse->maximum) {
		convert = convert_int(parse->i);
		convert = convert_base_ten(parse, convert);
		result = convert_base_ten(parse, result);
		printf("%s leads to %s in %d iteration(s) in base %d\n"
		, convert, result, parse->counter, parse->base);
	}
}
