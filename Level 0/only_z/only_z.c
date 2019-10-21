/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   only_z.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jdunnink <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/21 10:48:59 by jdunnink      #+#    #+#                 */
/*   Updated: 2019/10/21 10:50:10 by jdunnink      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(void)
{
	ft_putchar('z');
	ft_putchar('\n');
	return (0);
}
