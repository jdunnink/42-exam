/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   aff_last_param.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: jdunnink <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/21 10:31:18 by jdunnink      #+#    #+#                 */
/*   Updated: 2019/10/21 10:36:20 by jdunnink      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		ft_putchar(*str);
		str++;
	}
}

int		main(int argc, char **argv)
{
	if (argc >= 2)
		ft_putstr(argv[argc - 1]);
	ft_putchar('\n');
	return (0);
}
