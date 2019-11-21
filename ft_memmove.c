/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memmove.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: keblazer <keblazer@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/11 17:12:51 by keblazer       #+#    #+#                */
/*   Updated: 2019/11/21 01:44:11 by keblazer      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

// TODO:
// [fail]: your memmove does not support the overlap (test 1)
// [crash]: your memmove does not well with NULL as both parameters and size

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*d;
	const char	*s;

	d = dst;
	s = src;
	while (len--)
	{
		*d++ = *s++;
	}
	return (dst);
}
