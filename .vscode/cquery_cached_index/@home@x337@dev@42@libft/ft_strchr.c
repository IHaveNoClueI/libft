/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: keblazer <keblazer@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/11 17:12:39 by keblazer       #+#    #+#                */
/*   Updated: 2019/11/25 14:55:59 by keblazer      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	char *chr;

	chr = (char *)s;
	while (*chr != c)
	{
		if (!*chr)
		{
			return (NULL);
		}
		chr++;
	}
	return (chr);
}
