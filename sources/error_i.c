/*
** EPITECH PROJECT, 2018
** error_i.c
** File description:
** error_i
*/

#include "palindrome.h"

void error_flag(char **array)
{
	int i = 0;

	while (array[i]) {
		if (array[i][0] == '-' && array[i][1] != 'p' &&
			array[i][1] != 'b' && array[i][1] != 'n' &&
			strcmp(array[i], "-imin") != 0 &&
			strcmp(array[i], "-imax") != 0)
			exit(84);
		i++;
	}
}

void imin_flag(char *arg, parse_t *parse)
{
	int i = -1;

	while (arg[++i]) {
		if (arg[i] > '9' || arg[i] < '0') {
			puts("invalid argument");
			exit(84);
		}
	}
	parse->minimum = atoi(arg);
}

void imax_flag(char *arg, parse_t *parse)
{
	int i = -1;

	while (arg[++i]) {
		if (arg[i] > '9' || arg[i] < '0') {
			puts("invalid argument");
			exit(84);
		}
	}
	parse->maximum = atoi(arg);
}
