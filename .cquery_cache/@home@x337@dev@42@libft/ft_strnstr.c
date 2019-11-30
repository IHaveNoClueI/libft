/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strnstr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: keblazer <keblazer@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/11 17:12:24 by keblazer       #+#    #+#                */
/*   Updated: 2019/11/28 17:40:51 by keblazer      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

 char	*ft_strnstr(const char *big, const char *little, size_t len)
 {
	size_t i;
	char *ptr;

	i = 0;
	// If little is an empty string, big is returned;
	if (!*little)
	{
		return ((char *)big);
	}
	// if little occurs nowhere in big, NULL is returned;
	while(i <= len)
	{
		if (little[len] != big[len])
		{
			return (0);
		}
	}
	// otherwise a pointer to the first character of the first occurrence of little is returned.
	
