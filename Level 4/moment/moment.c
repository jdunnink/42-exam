/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   moment.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jdunnink <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/06/17 13:08:16 by jdunnink      #+#    #+#                 */
/*   Updated: 2019/06/17 14:09:54 by jdunnink      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

unsigned int ft_strlen(char *str)
{
	unsigned int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char *ft_strdup(char *str)
{
	unsigned int len;
	unsigned int i;
	char *dest;

	len = ft_strlen(str);
	if (len == 0)
		return (0);
	dest = (char*)malloc(sizeof(char) * len + 1);
	if (!dest)
		return (0);
	dest[len] = '\0';
	i = 0;
	while (i < len)
	{
		dest[i] = str[i];
		i++;
	}
	return (dest);
}

char *ft_itoa_unsign(unsigned int nb)
{
	unsigned int tmp;
	unsigned int len;
	char *dest;

	tmp = nb;
	len = 0;
	if (nb == 0)
		return (ft_strdup("0"));
	while (tmp > 0)
	{
		tmp = tmp / 10;
		len++;
	}
	dest = (char*)malloc(sizeof(char) * len + 1);
	if (!dest)
		return (0);
	dest[len] = '\0';
	len--;
	while (nb > 0)
	{
		dest[len] = (nb % 10) + '0';
		nb = nb / 10;
		len--;
	}
	return (dest);
}


char find_scale(unsigned int duration)
{
	unsigned int second;
	unsigned int minute;
	unsigned int hour;
	unsigned int day;
	unsigned int month;
	char scale;

	second = 1;
	minute = 60 * second;
	hour = minute * 60;
	day = 24 * hour;
	month = 30 * day;
	scale = '0';

	if (duration <= minute)
		scale = 's';
	else if (duration <= hour)
		scale = 'm';
	else if (duration <= day)
		scale = 'h';
	else if (duration <= month)
		scale = 'd';
	else
		scale = 'M';
	return (scale);
}

unsigned int find_count(char scale, unsigned int duration)
{
	if (scale == 's')
		return (duration / 1);
	else if (scale == 'm')
		return (duration / 60);
	else if (scale == 'h')
		return (duration / (60 * 60));
	else if (scale == 'd')
		return (duration / (60 * 60 * 24));
	return (duration / (60 * 60 * 24 * 30));
}

char *get_scalename(char scale)
{
	if (scale == 's')
        return (ft_strdup(" second"));
    else if (scale == 'm')
        return (ft_strdup(" minute"));
    else if (scale == 'h')
        return (ft_strdup(" hour"));
    else if (scale == 'd')
        return (ft_strdup(" day"));
	return (ft_strdup(" month"));
}

char *ft_strjoin_three_free(char *s1, char *s2, char *s3)
{
	unsigned int destlen;
	unsigned int i;
	unsigned int j;
	char *dest;

	destlen = ft_strlen(s1) + ft_strlen(s2) + ft_strlen(s3);
	dest = (char*)malloc(sizeof(char) * destlen + 1);
	if (!dest)
		return (0);
	dest[destlen] = '\0';
	i = 0;
	j = 0;
	while (j < ft_strlen(s1))
	{
		dest[i] = s1[j];
		i++;
		j++;
	}
	j = 0;
	while (j < ft_strlen(s2))
	{
		dest[i] = s2[j];
    	i++;
    	j++;
    }
	j = 0;
	while (j < ft_strlen(s3))
    {
      	dest[i] = s3[j];
     	i++;
     	j++;
    }
	free(s1);
	free(s2);
	free(s3);
	return (dest);
}

char *moment(unsigned int duration)
{
	char scale;
	unsigned int count;
	char *scalename;
	char *num;
	char *adjec;
	char *dest;

	count = 0;
	scale = find_scale(duration);
	if (scale == '0')
		return (0);
	scalename = get_scalename(scale);
	count = find_count(scale, duration);
	num = ft_itoa_unsign(count);
	if (count != 1)
		adjec = ft_strdup("s ago.");
	else
		adjec = ft_strdup(" ago.");
	dest = ft_strjoin_three_free(num, scalename, adjec);
	return (dest);
}
