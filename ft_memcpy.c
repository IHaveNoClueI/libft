/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcpy.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: keblazer <keblazer@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/11 17:12:53 by keblazer       #+#    #+#                */
<<<<<<< HEAD
/*   Updated: 2019/11/14 23:42:26 by keblazer      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// #include <string.h>

// void	*ft_memcpy(void *dest, const void *src, size_t n)
// {

// }

=======
/*   Updated: 2019/11/15 05:35:14 by keblazer      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*d;
	const char	*s;

	d = dest;
	s = src;
	while (n--)
	{
		*d++ = *s++;
	}
	return (dest);
}
>>>>>>> refs/remotes/origin/master
