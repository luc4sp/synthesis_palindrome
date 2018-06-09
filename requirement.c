/*
** EPITECH PROJECT, 2018
** requirement.c
** File description:
** requirement
*/

#include <stdio.h>

int my_factrec_synthesis(int nb)
{
	if (nb < 0)
		return (0);
	if (nb > 12)
		return (0);
	if (nb > 1)
		return (nb * my_factrec_synthesis(nb - 1));
	else
		return (1);
}

int my_squareroot_synthesis(int nb)
{
	int sqrt;
	int parfait;

	if (nb < 0)
		return (-1);
	if (nb == 0)
		return (0);
	if (nb == 1)
		return (1);
	sqrt = 0;
	while (++sqrt <= nb / 2) {
		parfait = sqrt * sqrt;
		if (parfait == nb)
			return (sqrt);
	}
	return (-1);
}
