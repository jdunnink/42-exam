/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_range.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: jdunnink <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/04/15 17:18:32 by jdunnink      #+#    #+#                 */
/*   Updated: 2019/04/15 17:30:11 by jdunnink      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int start, int end)
{
	int range;
	int *array;
	int i;

	i = 0;
	range = end - start;
	if (range < 0)
		range = range * -1;
	array = (int*)malloc(sizeof(int) * range);
	if (array)
	{	
		while (range >= 0)
		{
			array[i] = start;
			i++;
			if(start > end)
				start--;
			else
				start++;
			range--;
		}
	}
	return (array);
}
