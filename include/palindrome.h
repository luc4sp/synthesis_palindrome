/*
** EPITECH PROJECT, 2018
** palindrome.h
** File description:
** palindrome
*/

#ifndef PALINDROME_H_
#define PALINDROME_H_

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>

typedef struct parse_s {
	char *number;
	char *palindrome;
	int base;
	int minimum;
	int maximum;
	int co;
	char *save;
	int counter;
	char *final;
	int bal_number;
	int bal_pal;
	int i;
	int index;
	char *tmp;
} parse_t;

int check_arg(char **array, parse_t *);
void help(void);
char *decimal(int nbr, char *base_to);
char *convert_base(parse_t *, char *nbr);
char *iterate(char *number, parse_t *);
char *my_revstr(char *str);
char *convert_base_ten(parse_t *, char *nbr);
char *convert_int(int nbr);
void print_line(parse_t *);
void n_flag(char *arg, parse_t *);
void p_flag(char *arg, parse_t *);
void b_flag(char *arg, parse_t *);
void imin_flag(char *arg, parse_t *);
void imax_flag(char *arg, parse_t *);
void error_flag(char **array);
void check_palindrome(parse_t *);
char *iteration(char *number, parse_t *);
void iterate_p(char *result, parse_t *);
char *iteration(char *number, parse_t *);
void print_pal(parse_t *, char *result);
void loop(char **array, int i, parse_t *);
void split(parse_t *parse);

#endif
