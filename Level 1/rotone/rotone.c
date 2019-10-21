/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   rotone.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jdunnink <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/21 15:22:33 by jdunnink      #+#    #+#                 */
/*   Updated: 2019/10/21 15:30:08 by jdunnink      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	rotone(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'y') ||
			(str[i] >= 'A' && str[i] <= 'Y'))
			ft_putchar(str[i] + 1);
		else if (str[i] == 'z' || str[i] == 'Z')
			ft_putchar(str[i] - 25);
		else
			ft_putchar(str[i]);
		i++;
	}
}

int		main(int argc, char **argv)
{
	if (argc == 2)
		rotone(argv[1]);
	ft_putchar('\n');
}
