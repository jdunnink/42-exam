/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_itoa.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: jdunnink <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/05/21 10:56:22 by jdunnink      #+#    #+#                 */
/*   Updated: 2019/05/21 11:04:43 by jdunnink      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_itoa(int nbr)
{
	int			sign;
	int			len;
	long int	tmp;
	long int	ll;
	char		*dest;

	sign = 0;
	len = 0;
	ll = (long)nbr;
	if (ll == 0)
	{
		dest = (char*)malloc(sizeof(char) * 2);
		dest[0] = '0';
		dest[1] = '\0';
		return (dest);
	}
	if (ll < 0)
	{
		len++;
		sign = -1;
		ll = ll * - 1;
	}
	tmp = ll;
	while (tmp > 0)
	{
		len++;
		tmp = tmp / 10;
	}
	dest = (char*)malloc(sizeof(char) * len + 1);
	dest[len] = '\0';
	len--;
	while (ll > 0)
	{
		dest[len] = ll % 10 + '0';
		ll = ll / 10;
		len--;
	}
	if (sign == -1)
		dest[len] = '-';
	return (dest);
}
