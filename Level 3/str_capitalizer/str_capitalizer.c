/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   str_capitalizer.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: jdunnink <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/04/15 12:03:52 by jdunnink      #+#    #+#                 */
/*   Updated: 2019/04/15 12:25:51 by jdunnink      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putstr(char *str)
{
	while(*str != '\0')
	{
		ft_putchar(*str);
		str++;
	}
}

void make_lower(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
}

void capitalize(char *str)
{
	int i;

	i = 0;
	if (str[i] >= 'a' && str[i] <= 'z')
	{
		str[i] = str[i] - 32;
		i++;
	}
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if(str[i - 1] == ' ' || str[i - 1] == '\t')
			{
				str[i] = str[i] - 32;
			}
		}
		i++;
	}
}

int main(int argc, char **argv)
{
	int i;

	if (argc < 2)
	{
		ft_putchar('\n');
		return (0);
	}

	i = 1;
	while (i < argc)
	{
		make_lower(argv[i]);
		capitalize(argv[i]);
		ft_putstr(argv[i]);
		ft_putchar('\n');
		i++;
	}
	return (0);
}
