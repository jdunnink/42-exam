/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_countdown.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: jdunnink <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/21 09:38:00 by jdunnink      #+#    #+#                 */
/*   Updated: 2019/10/21 09:44:31 by jdunnink      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(void)
{
	int digit;

	digit = 9;
	while (digit > -1)
	{
		ft_putchar(digit + 48);
		digit--;
	}
	ft_putchar('\n');
	return (0);
}
