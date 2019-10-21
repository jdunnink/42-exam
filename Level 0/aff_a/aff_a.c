/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   aff_a.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: jdunnink <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/21 09:08:03 by jdunnink      #+#    #+#                 */
/*   Updated: 2019/10/21 09:28:49 by jdunnink      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	read_string(char *string)
{
	int i;

	i = 0;
	while (string[i] != '\0')
	{
		if (string[i] == 'a')
		{
			ft_putchar(string[i]);
			return ;
		}
		i++;
	}
}

int		main(int argc, char **argv)
{
	if (argc != 2)
	{
		ft_putchar('a');
		ft_putchar('\n');
		return (0);
	}
	else
		read_string(argv[1]);
	ft_putchar('\n');
}
