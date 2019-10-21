/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   maff_alpha.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jdunnink <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/21 10:00:12 by jdunnink      #+#    #+#                 */
/*   Updated: 2019/10/21 10:08:51 by jdunnink      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(void)
{
	char	alpha;
	int		i;

	alpha = 'a';
	i = 0;
	while (alpha <= 'z')
	{
		if (i % 2 != 0)
			ft_putchar(alpha - 32);
		else
			ft_putchar(alpha);
		alpha++;
		i++;
	}
	ft_putchar('\n');
	return (0);
}
