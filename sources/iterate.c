/*
** EPITECH PROJECT, 2018
** iterate.c
** File description:
** iterate
*/

#include "palindrome.h"

char *iterate(char *number, parse_t *parse)
{
	int nbr = 0;
	int nbr_rev = 0;
	int result = 0;
	char *str = number;
	char *str_rev = my_revstr(number);
	parse->counter = 0;

	while (parse->counter <= parse->maximum) {
		if (strcmp(str, str_rev) == 0)
			return (str);
		nbr = atoi(convert_base_ten(parse, str));
		nbr_rev = atoi(convert_base_ten(parse, str_rev));
		result = nbr + nbr_rev;
		str = convert_int(result);
		str = convert_base(parse, str);
		str_rev = my_revstr(str);
		parse->counter++;
	}
	puts("no solution");
	exit(0);
}

char *iteration(char *number, parse_t *parse)
{
	int nbr = 0;
	int nbr_rev = 0;
	int result = 0;
	char *str = number;
	char *str_rev = my_revstr(number);
	parse->counter = 0;

	while (atoi(str) <= atoi(parse->tmp) &&
		(parse->counter <= parse->maximum ||
		parse->counter <= atoi(parse->tmp))) {
		if (strcmp(str, parse->tmp) == 0)
			return (str);
		nbr = atoi(str);
		nbr_rev = atoi(str_rev);
		result = nbr + nbr_rev;
		str = convert_int(result);
		str_rev = my_revstr(str);
		parse->counter++;
	}
	return (NULL);
}
