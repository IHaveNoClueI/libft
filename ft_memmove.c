/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memmove.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: keblazer <keblazer@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/11 17:12:51 by keblazer       #+#    #+#                */
/*   Updated: 2019/11/30 13:56:48 by keblazer      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*s;
	char	*d;
	size_t	i;

	i = -1;
	s = (char *)src;
	d = (char *)dst;
	if (!len || dst == src)
	{
		return (dst);
	}
	if (s < d)
		while ((int)(--len) >= 0)
		{
			*(d + len) = *(s + len);
		}
	else
	{
		while (++i < len)
		{
			*(d + i) = *(s + i);
		}
	}
	return (dst);
}
