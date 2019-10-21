/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   repeat_alpha.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: jdunnink <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/21 13:05:42 by jdunnink      #+#    #+#                 */
/*   Updated: 2019/10/21 13:32:48 by jdunnink      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_alpha(char c, int i)
{
	while (i > 0)
	{
		ft_putchar(c);
		i--;
	}
}

void	repeat_alpha(char c)
{
	int i;

	i = 0;
	if (c >= 'A' && c <= 'Z')
		i = c - 64;
	else if (c >= 'a' && c <= 'z')
		i = c - 96;
	if (i != 0)
		print_alpha(c, i);
	else
		ft_putchar(c);
}

void	read_string(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		repeat_alpha(str[i]);
		i++;
	}
}

int		main(int argc, char **argv)
{
	if (argc == 2)
		read_string(argv[1]);
	ft_putchar('\n');
}
