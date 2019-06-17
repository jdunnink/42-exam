/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   rev_wstr.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: jdunnink <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/05/13 15:20:37 by jdunnink      #+#    #+#                 */
/*   Updated: 2019/05/13 16:19:38 by jdunnink      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

size_t ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

size_t find_last_word(char *str)
{
	size_t i;

	i = ft_strlen(str);
	if (i == 0)
		return (0);
	while (str[i] != ' ' && str[i] != '\t')
	{
		if (i == 0)
			return (i);
		i--;
	}
	return (i);
}

char *get_word(char *str)
{
	size_t i;
	size_t j;
	size_t len;
	char *dest;

	i = 0;
	len = 0;
	while (str[i] != '\0')
	{
		if (str[i] != ' ' && str[i] != '\t')
			len++;
		i++;
	}
	dest = (char*)malloc(sizeof(char) * (len + 1));
	if (!dest)
		return (0);
	i = 0;
	j = 0;
	dest[len] = '\0';
	while (str[i] != '\0')
	{
		if (str[i] != ' ' && str[i] != '\t')
		{
			dest[j] = str[i]; 
			j++;
		}
		i++;
	}
	return (dest);
}

void zero_lw(char *str)
{
	while (*str != '\0')
	{
		*str = '\0';
		str++;
	}
}

int main(int argc, char **argv)
{
	size_t i;
	char *last_word;
	char *ptr;

	i = 1;
	if (argc != 2)
	{
		ft_putchar('\n');
		return (0);
	}
	while (i != 0)
	{
		i = find_last_word(argv[1]);
		ptr = argv[1] + i;
		last_word = get_word(ptr);
		ft_putstr(last_word);
		zero_lw(ptr);
		if (i != 0)
			ft_putchar(' ');
		free(last_word);
	}
	ft_putchar('\n');
	return (0);
}
