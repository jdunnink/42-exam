/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   union.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: jdunnink <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/22 10:02:55 by jdunnink      #+#    #+#                 */
/*   Updated: 2019/10/22 10:25:55 by jdunnink      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		check_back(char *str, char c, int i)
{
	i--;
	while (i >= 0)
	{
		if (str[i] == c)
			return (0);
		i--;
	}
	return (1);
}

int		check_other(char c, char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
			return (0);
		i++;
	}
	return (1);
}

void	unite(char *one, char *two)
{
	int i;

	i = 0;
	while (one[i] != '\0')
	{
		if (check_back(one, one[i], i) == 1)
			ft_putchar(one[i]);
		i++;
	}
	i = 0;
	while (two[i] != '\0')
	{
		if (check_back(two, two[i], i) == 1)
			if (check_other(two[i], one))
				ft_putchar(two[i]);
		i++;
	}
}

int		main(int argc, char **argv)
{
	if (argc == 3)
		unite(argv[1], argv[2]);
	ft_putchar('\n');
}
