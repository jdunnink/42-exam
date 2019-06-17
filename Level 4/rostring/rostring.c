/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   rostring.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: jdunnink <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/06/17 10:31:24 by jdunnink      #+#    #+#                 */
/*   Updated: 2019/06/17 11:58:49 by jdunnink      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_isspace(char c)
{
	if (c == ' ' || c == '\t')
		return (1);
	return (0);
}

void	ft_putword(char *str)
{
	while (*str != '\0' && ft_isspace(*str) == 0)
	{
		ft_putchar(*str);
		str++;
	}
}

int		count_words(char *str)
{
	int i;
	int	count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		if (ft_isspace(str[i]) == 0 && ft_isspace(str[i + 1]) == 1)
			count++;
		else if (ft_isspace(str[i]) == 0 && str[i + 1] == '\0')
			count++;
		i++;
	}
	return (count);
}

char *move_to_word_n(char *str, int n)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (ft_isspace(str[i]) == 1)
		i++;
	while (str[i] != '\0')
	{
		if (str + i == str)
			count++; 
		else if (ft_isspace(str[i]) == 0 && ft_isspace(str[i - 1]) == 1)
			count++;
		if (count == n)
			break;
		i++;
	}
	return (str + i);
}

int main(int argc, char **argv)
{
	int words;
	char *ptr;
	int i;

	if (argc < 2)
	{
		ft_putchar('\n');
		return (0);
	}
	words = count_words(argv[1]);
	i = 2;
	while (i <= words)
	{
		ptr = move_to_word_n(argv[1], i);
		ft_putword(ptr);
		i++;
		ft_putchar(' ');
	}
	ptr = move_to_word_n(argv[1], 1);
	ft_putword(ptr);
	ft_putchar('\n');
	return (0);
}
