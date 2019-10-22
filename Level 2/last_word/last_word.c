/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   last_word.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: jdunnink <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/22 09:19:27 by jdunnink      #+#    #+#                 */
/*   Updated: 2019/10/22 09:35:44 by jdunnink      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		is_alpha(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}

int		is_space(char c)
{
	if (c == ' ' || c == '\t')
		return (1);
	return (0);
}

void	print_word(char *str)
{
	int i;

	i = 0;
	while (is_space(str[i]) == 0 && str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	last_word(char *str)
{
	int i;

	i = 0;
	while (str[i + 1] != '\0')
		i++;
	while (i >= 0)
	{
		if (is_space(str[i - 1]) == 1 && is_space(str[i]) == 0)
		{
			print_word(&(str[i]));
			break ;
		}
		else if (i == 0 && is_alpha(str[i]))
		{
			print_word(str);
			break ;
		}
		i--;
	}
	return ;
}

int		main(int argc, char **argv)
{
	if (argc == 2)
		last_word(argv[1]);
	ft_putchar('\n');
	return (0);
}
