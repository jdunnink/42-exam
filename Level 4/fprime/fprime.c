/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   fprime.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: exam <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/05/07 13:04:36 by exam          #+#    #+#                 */
/*   Updated: 2019/05/07 13:44:22 by exam          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	f_prime(unsigned int nb)
{
	unsigned int prime;

	if (nb <= 1)
	{
		printf("%i", nb);
		return ;
	}
	prime = 2;
	while (prime <= nb)
	{
		if (nb % prime == 0)
		{
			printf("%i", prime);
			nb = nb / prime;
			if (nb > 1)
				printf("*");
			prime--;
		}
		prime++;
	}
}

int		main(int argc, char **argv)
{
	if (argc != 2)
	{
		printf("\n");
		return (0);
	}
	f_prime(atoi(argv[1]));
	printf("\n");
	return (0);
}
