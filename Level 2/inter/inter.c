/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   inter.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: jdunnink <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/22 09:04:55 by jdunnink      #+#    #+#                 */
/*   Updated: 2019/10/22 09:18:23 by jdunnink      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"

void			ft_putchar(char c)
{
	write(1, &c, 1);
}

static	void	check_double(char *one, char c, int i)
{
	i--;
	while (i >= 0)
	{
		if (c == one[i])
			return ;
		i--;
	}
	ft_putchar(c);
}

void			inter(char *one, char *two)
{
	int i;
	int j;

	i = 0;
	while (one[i] != '\0')
	{
		j = 0;
		while (two[j] != '\0')
		{
			if (one[i] == two[j])
			{
				check_double(one, one[i], i);
				break ;
			}
			j++;
		}
		i++;
	}
}

int				main(int argc, char **argv)
{
	if (argc == 3)
		inter(argv[1], argv[2]);
	ft_putchar('\n');
	return (0);
}
