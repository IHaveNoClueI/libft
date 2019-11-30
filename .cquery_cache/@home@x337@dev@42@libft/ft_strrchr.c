/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strrchr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: keblazer <keblazer@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/11 17:12:22 by keblazer       #+#    #+#                */
/*   Updated: 2019/11/25 15:13:41 by keblazer      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	char	*chr;

	chr = NULL;
	if (c == '\0')
	{
		return ((char*)s + ft_strlen(s));
	}
	while (*s)
	{
		if (*s == (char)c)
		{
			chr = (char *)s;
		}
		s++;
	}
	return (chr);
}
