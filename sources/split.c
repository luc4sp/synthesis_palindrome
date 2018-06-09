/*
** EPITECH PROJECT, 2018
** split.c
** File description:
** split
*/

#include "palindrome.h"

void split(parse_t *parse)
{
	char *result = NULL;

	if (parse->bal_number == 1) {
		result = convert_base(parse, parse->number);
		result = iterate(result, parse);
		parse->final = convert_base_ten(parse, result);
		print_line(parse);
	}
}
