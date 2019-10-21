/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: jdunnink <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/06/18 10:52:21 by jdunnink      #+#    #+#                 */
/*   Updated: 2019/06/18 11:13:20 by jdunnink      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_isspace(char c)
{
	if (c == '\t' || c == '\n' || c == ' ')
		return (1);
	return (0);
}

unsigned int count_words(char *str)
{
	unsigned int words;
	unsigned int i;

	i = 0;
	words = 0;
	while (str[i] != '\0')
	{
		if (ft_isspace(str[i]) == 0 && ft_isspace(str[i + 1]) == 1)
			words++;
		else if (ft_isspace(str[i]) == 0 && str[i + 1] == '\0')
			words++;
		i++;
	}
	return (words);
}

char *get_next_word(char **str)
{
	char *dest;
	char *strt;
	unsigned int len;
	unsigned int i;

	while (ft_isspace(**str) == 1 && **str != '\0')
		*str = *str + 1;
	strt = *str;
	len = 0;
	while (ft_isspace(**str) == 0 && **str != '\0')
	{
		len++;
		*str = *str + 1;
	}
	dest = (char*)malloc(sizeof(char) * len + 1);
	dest[len] = '\0';
	i = 0;
	while (i < len)
	{
		dest[i] = strt[i];
		i++;
	}
	return (dest);
}

char **ft_split(char *str)
{
	unsigned int	words;
	unsigned int	i;
	char			**dest;
	char			*ptr;

	i = 0;
	words = count_words(str);
	dest = (char**)malloc(sizeof(char*) * words + 1);
	dest[words] = NULL;
	ptr = str;
	while (i < words)
	{
		dest[i] = get_next_word(&ptr);
		i++;
	}
	return (dest);
}
