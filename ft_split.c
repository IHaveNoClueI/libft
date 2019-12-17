/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: keblazer <keblazer@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/11 17:12:41 by keblazer       #+#    #+#                */
/*   Updated: 2019/12/18 00:34:01 by keblazer      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_splitpos(char const *s, char c)
{
	int pos;

	pos = 0;
	while (s[pos] != c)
	{
		pos++;
	}
	return (pos);
}

int		ft_splitlen(char const *s)
{
	int len;

	len = 0;
	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}

char	**ft_split(char const *s, char c)
{
	int		pos;
	int		len;

	pos = ft_splitpos(s, c);
	len = ft_splitlen(s) + 1;
	while (s[pos] != s[len] && s[pos] != '\0')
	{
		if (s[pos] == c)
		{ 
			pos++;
		}
		ft_putchar(s[pos]);
	}
	return (0);
}
