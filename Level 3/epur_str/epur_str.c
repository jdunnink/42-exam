/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   epur_str.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: jdunnink <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/04/15 13:30:38 by jdunnink      #+#    #+#                 */
/*   Updated: 2019/04/15 16:11:08 by jdunnink      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_isprint(char c)
{
	if (c > 33 && c < 127)
		return (1);
	return (0);
}

int ft_isspace(char c)
{
	if (c == ' ' || c == '\t' || c == '\n')
		return (1);
	return (0);
}

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while(str[i] != '\0')
		i++;
	return (i);
}

int trim_end(char *str)
{
	int len = ft_strlen(str);
	
	while(ft_isspace(str[len - 1]))
		len--;
	return (len);
}

void	epur_str(char *str)
{
	int len;

	len = trim_end(str);
	while (*str == ' ' || *str == '\t')
		str++;
	while (*str != '\0' && len > 0)
	{
		if (ft_isspace(*str) == 0)
			ft_putchar(*str);
		else if (ft_isspace(*str) == 1)
		{
			while(ft_isspace(*str))
			{
				len--;
				str++;
			}
			if(ft_isprint(*str))
			{
			   ft_putchar(' ');
			   ft_putchar(*str);
			}
		}
		str++;
		len--;
	}
}

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		ft_putchar('\n');
		return (0);
	}
	epur_str(argv[1]);
	ft_putchar('\n');
	return (0);
}
