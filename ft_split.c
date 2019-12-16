/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: keblazer <keblazer@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/11 17:12:41 by keblazer       #+#    #+#                */
/*   Updated: 2019/12/16 13:50:31 by keblazer      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_splitpos(char const *s, char c)
{
	int pos;

	pos = 0;
	while (s[pos] != '\0' && s[pos] != c)
	{
		pos++;
	}
	return (pos);
}

int		ft_splitlen(char const *s)
{
	int len;

	len = 0;
	if (s[len] != '\0' && s[len] == ft_isalnum(s[len]))
	{
		len++;
	}
	return (len);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		pos;
	int		len;

	i = 0;
	pos = ft_splitpos(s, c);
	len = ft_splitlen(s);
	while (s[pos] != c)
	{
		ft_putchar(s[pos]);
	}
	return (0);
}
