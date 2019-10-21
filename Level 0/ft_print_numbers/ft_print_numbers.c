/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_numbers.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: jdunnink <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/21 09:45:23 by jdunnink      #+#    #+#                 */
/*   Updated: 2019/10/21 09:53:46 by jdunnink      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void			ft_print_numbers(void)
{
	char digit;

	digit = '0';
	while (digit <= '9')
	{
		write(1, &digit, 1);
		digit++;
	}
}
