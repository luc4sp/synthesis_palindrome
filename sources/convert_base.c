/*
** EPITECH PROJECT, 2018
** convert_base.c
** File description:
** convert_base
*/

#include "palindrome.h"

char *my_revstr(char *str)
{
	int i = 0;
	int j = strlen(str);
	char *result = malloc(sizeof(char) * (j + 1));

	j--;
	while (j >= 0) {
		result[i++] = str[j];
		j--;
	}
	result[i] = '\0';
	return (result);
}

char *convert_int(int nbr)
{
	char *str;
	int i = 10;
	int j = 1;

	while (nbr >= i) {
		j++;
		i = i * 10;
	}
	str = calloc(sizeof(char), (j + 1));
	str[j] = '\0';
	i = 1;
	while (j > 0) {
		j--;
		str[j] = (nbr / i) % 10 + 48;
		i = i * 10;
	}
	return (str);
}

char *convert_base(parse_t *parse, char *nbr)
{
	int m = 0;
	int q = 0;
	char *result;

	q = atoi(nbr);
	if (q == 0)
		return ("0");
	result = calloc(sizeof(char), strlen(nbr) * 10);
	m = 0;
	while (q > 0) {
		result[m++] = q % parse->base + '0';
		q = q / parse->base;
	}
	result = my_revstr(result);
	return (result);
}

char *convert_base_ten(parse_t *parse, char *nbr)
{
	int m = 0;
	int q = 0;
	int result;
	char *final = NULL;

	q = 1;
	if (parse->base == 10)
		return (nbr);
	m = strlen(nbr);
	result = 0;
	while (--m >= 0) {
		result = result + (nbr[m] - '0') * q;
		q = q * parse->base;
	}
	final = convert_int(result);
	return (final);
}
