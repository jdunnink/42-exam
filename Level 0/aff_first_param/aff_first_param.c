/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   aff_first_param.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: jdunnink <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/21 10:12:32 by jdunnink      #+#    #+#                 */
/*   Updated: 2019/10/21 10:30:20 by jdunnink      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		main(int argc, char **argv)
{
	if (argc >= 2)
		ft_putstr(argv[1]);
	ft_putchar('\n');
	return (0);
}
