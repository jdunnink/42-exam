/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: jdunnink <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/22 08:25:56 by jdunnink      #+#    #+#                 */
/*   Updated: 2019/10/22 08:42:54 by jdunnink      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(const char *str)
{
	int i;
	int dest;
	int neg;

	i = 0;
	neg = 1;
	while (str[i] == ' ' || str[i] == '\t')
		i++;
	if (str[i] == '-')
	{
		neg = -1;
		i++;
	}
	dest = 0;
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		dest *= 10;
		dest += (str[i] - 48);
		i++;
	}
	return (dest * neg);
}
