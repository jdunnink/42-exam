/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   brainfuck.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: jdunnink <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/05/20 16:22:53 by jdunnink      #+#    #+#                 */
/*   Updated: 2019/05/20 16:39:06 by jdunnink      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void	brainfuck(char *source)
{
	char	bytes[2048] = {0};
	char	*ptr;
	size_t	i;
	int		balance;

	balance = 0;
	ptr = bytes;
	i = 0;
	while(source[i] != '\0')
	{
		if (source[i] == '>')
			ptr++;
		else if (source[i] == '<')
			ptr--;
		else if (source[i] == '+')
			++(*ptr);
		else if (source[i] == '-')
			--(*ptr);
		else if (source[i] == '[' && *ptr == 0)
		{
			balance++;
			while (balance != 0)
			{
				i++;
				if (source[i] == ']')
					balance--;
				else if (source[i] == '[')
					balance++;
			}
		}
		else if (source[i] == ']' && *ptr != 0)
		{
			balance++;
			while (balance != 0)
			{
				i--;
				if (source[i] == ']')
					balance++;
				else if (source[i] == '[')
					balance--;
			}
		}
		else if (source[i] == '.')
			ft_putchar(*ptr);
		i++;
	}
}

int main(int argc, char **argv)
{
	if (argc > 1 && argv[1][0])
		brainfuck(argv[1]);
	else
		ft_putchar('\n');
	return (0);
}
