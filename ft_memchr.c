/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: keblazer <keblazer@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/11 17:12:56 by keblazer       #+#    #+#                */
/*   Updated: 2019/11/21 07:37:56 by keblazer      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	location;
	size_t			i;

	str = (unsigned char *)s;
	location = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (*str == location)
		{
			return (str);
		}
		str++;
		i++;
	}
	return (0);
}
