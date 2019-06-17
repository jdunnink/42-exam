/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   sort_int_tab.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: jdunnink <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/05/29 10:10:57 by jdunnink      #+#    #+#                 */
/*   Updated: 2019/05/29 10:37:16 by jdunnink      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

void	sort_int_tab(int *tab, unsigned int size)
{
	unsigned int i;
	int tmp;

	i = 0;
	while (i < (size - 1))
	{
		if (tab[i] > tab[i + 1])
		{
			tmp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = tmp;
			i = 0;
		}
		else
			i++;
	}
}
