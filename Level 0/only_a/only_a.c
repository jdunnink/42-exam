/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   only_a.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jdunnink <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/21 10:44:40 by jdunnink      #+#    #+#                 */
/*   Updated: 2019/10/21 10:47:32 by jdunnink      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(void)
{
	ft_putchar('a');
	ft_putchar('\n');
	return (0);
}
