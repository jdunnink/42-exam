/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   add_prime_sum.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: jdunnink <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/04/15 10:42:40 by jdunnink      #+#    #+#                 */
/*   Updated: 2019/04/15 11:07:17 by jdunnink      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_is_prime(int c)
{
	int i;

	i = 2;
	if (c <= 1)
		return (0);
	while (i <= c / i)
	{
		if (c % i == 0)
			return (0);
		i++;
	}
	return (1);
}

void ft_putnbr(int c)
{
	if (c > 9)
	{
		ft_putnbr(c / 10);
		ft_putnbr(c % 10);
	}
	else
		ft_putchar(c + '0');
}

int ft_atoi(char *str)
{
	int res;
	int sign;

	sign = 1;
	if (*str == ' ' || *str == '\t' || *str == '\n')
		str++;
	if(*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	res = 0;
	while (*str >= '0' && *str <= '9')
	{
		res = res * 10 + *str - '0';
		str++;
	}
	return (res * sign);
}

int main(int argc, char **argv)
{
	int nb;
	int i;
	int res;

	if (argc != 2)
	{
		ft_putchar('0');
		ft_putchar('\n');
		return (0);
	}
	if (argv[1][0] == '-')
	{
		ft_putchar('0');
		ft_putchar('\n');
		return (0);
	}
	nb = ft_atoi(argv[1]);
	i = 1;
	res = 0;
	while (i <= nb)
	{
		if (ft_is_prime(i))
			res += i;
		i++;
	}
	ft_putnbr(res);
	ft_putchar('\n');
	return (0);
}
