/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   search_and_replace.c                               :+:    :+:            */
/*                                                     +:+                    */
/*   By: jdunnink <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/21 13:36:26 by jdunnink      #+#    #+#                 */
/*   Updated: 2019/10/21 13:52:19 by jdunnink      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void	search_and_replace(char **argv)
{
	char	*string;
	int		i;

	i = 0;
	string = argv[1];
	while (string[i] != '\0')
	{
		if (string[i] == argv[2][0])
			ft_putchar(argv[3][0]);
		else
			ft_putchar(string[i]);
		i++;
	}
}

int		main(int argc, char **argv)
{
	if (argc == 4)
	{
		if (ft_strlen(argv[2]) == 1 && ft_strlen(argv[3]) == 1)
			search_and_replace(argv);
	}
	ft_putchar('\n');
	return (0);
}
