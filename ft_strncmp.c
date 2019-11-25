/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strncmp.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: keblazer <keblazer@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/11 17:12:26 by keblazer       #+#    #+#                */
/*   Updated: 2019/11/22 12:24:50 by keblazer      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
	{
		return (0);
	}
	while (i < n)
	{
		while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		{
			i++;
		}
		return (s1[i] - s2[i]);
	}
	return (0);
}
