/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: keblazer <keblazer@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/11 17:12:41 by keblazer       #+#    #+#                */
/*   Updated: 2019/12/13 23:48:58 by keblazer      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_splitpos(char const *s, char c)
{
	int pos;

	pos = 0;
	while (s[pos] != '\0' && s[pos] != c)
	{
		pos++;
	}
	return (pos);
}

int	ft_splitlen(char const *s, char c)
{
	int len;

	if (s[len] != '\0')
	{
		len++;
	}
}
char			**ft_split(char const *s, char c)
{
	int 	i;
	int		pos;
	int		len;

	i = 0;
	pos = ft_splitpos(&s[i], c);
	len = ft_splitlen(&s[i], c) + 1;
	return (0);
}
