/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   maff_revalpha.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: jdunnink <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/21 10:37:15 by jdunnink      #+#    #+#                 */
/*   Updated: 2019/10/21 10:43:49 by jdunnink      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(void)
{
	char	alpha;
	int		i;

	alpha = 'z';
	i = 26;
	while (alpha >= 'a')
	{
		if (i % 2 != 0)
			ft_putchar(alpha - 32);
		else
			ft_putchar(alpha);
		i--;
		alpha--;
	}
	ft_putchar('\n');
}
