/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   rev_print.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: jdunnink <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/21 14:55:14 by jdunnink      #+#    #+#                 */
/*   Updated: 2019/10/21 15:21:45 by jdunnink      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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

void	rev_print(char *str)
{
	int i;

	i = ft_strlen(str);
	while (i >= 0)
	{
		ft_putchar(str[i]);
		i--;
	}
}

int		main(int argc, char **argv)
{
	if (argc == 2)
		rev_print(argv[1]);
	ft_putchar('\n');
	return (0);
}
