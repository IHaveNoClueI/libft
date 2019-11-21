/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_calloc.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: keblazer <keblazer@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/15 05:38:38 by keblazer       #+#    #+#                */
/*   Updated: 2019/11/21 01:42:05 by keblazer      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// TODO:
// [crash]: you didn't protect your malloc return
// [fail]: your calloc don't work with empty string
// [fail]: your calloc don't work with 0 size

void	*ft_calloc(size_t count, size_t size)
{
	void *ptr;

	if (count == 0 || size == 0)
	{
		return (NULL);
	}
	ptr = malloc(size * count);
	ft_bzero(ptr, count);
	return (ptr);
}
