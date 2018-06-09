/*
** EPITECH PROJECT, 2018
** error_mngmt.c
** File description:
** error
*/

#include "palindrome.h"

void n_flag(char *arg, parse_t *parse)
{
	int i = -1;

	while (arg[++i]) {
		if (arg[i] > '9' || arg[i] < '0') {
			puts("invalid argument");
			exit(84);
		}
	}
	if (parse->bal_pal == 1) {
		puts("invalid argument");
		exit(84);
	}
	parse->number = arg;
	parse->bal_number = 1;
}

void p_flag(char *arg, parse_t *parse)
{
	int i = -1;

	while (arg[++i]) {
		if (arg[i] > '9' || arg[i] < '0') {
			puts("invalid argument");
			exit(84);
		}
	}
	if (parse->bal_number) {
		puts("invalid argument");
		exit(84);
	}
	parse->palindrome = calloc(sizeof(char), (strlen(arg + 1)));
	parse->palindrome = arg;
	parse->bal_pal = 1;
}

void b_flag(char *arg, parse_t *parse)
{
	int i = -1;

	while (arg[++i]) {
		if (arg[i] > '9' || arg[i] < '0') {
			puts("invalid argument");
			exit(84);
		}
	}
	parse->base = atoi(arg);
	if (parse->base < 1 || parse->base > 10) {
		puts("invalid argument");
		exit(84);
	}
}
