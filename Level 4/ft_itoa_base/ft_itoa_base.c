/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_itoa_base.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: exam <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/05/21 13:01:17 by exam          #+#    #+#                 */
/*   Updated: 2019/05/21 13:21:44 by exam          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	ret(long int nb)
{
	if (nb < 10)
		return (nb + '0');
	else
		return (nb - 10 + 'A');
}

char	*ft_itoa_base(int value, int base)
{
	int sign;
	long int tmp;
	long int ll;
	char *dest;
	int len;
	
	ll = (long)value;
	if (ll == 0)
	{
		dest = (char*)malloc(sizeof(char) * 2);
		dest[0] = '0';
		dest[1] = '\0';
		return (dest);
	}
	len = 0;
	if (ll < 0 && base == 10)
	{
		len++;
		sign = -1;
	}
	if (ll < 0)
		ll = ll * -1;
	tmp = ll;
	while (tmp > 0)
	{
		len++;
		tmp = tmp / base;
	}
	dest = (char*)malloc(sizeof(char) * len + 1);
	dest[len] = '\0';
	len--;
	while (ll)
	{
		dest[len] = ret(ll % base);
		ll = ll / base;
		len--;
	}
	if (sign == -1)
		dest[len] = '-';
	return (dest);
}
