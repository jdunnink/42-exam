/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   aff_z.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: jdunnink <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/21 10:53:43 by jdunnink      #+#    #+#                 */
/*   Updated: 2019/10/21 11:00:15 by jdunnink      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	read_arg(char *str)
{
	while (*str != '\0')
	{
		if (*str == 'z')
		{
			ft_putchar('z');
			return ;
		}
		str++;
	}
	ft_putchar('z');
}

int		main(int argc, char **argv)
{
	if (argc != 2)
		ft_putchar('z');
	else
		read_arg(argv[1]);
	ft_putchar('\n');
	return (0);
}
