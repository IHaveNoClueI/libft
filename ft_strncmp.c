/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strncmp.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: keblazer <keblazer@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/11 17:12:26 by keblazer       #+#    #+#                */
/*   Updated: 2019/11/30 14:06:16 by keblazer      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*ss1;
	unsigned char	*ss2;

	ss1 = (unsigned char *)s1;
	ss2 = (unsigned char *)s2;
	i = 0;
	if (!n || ss1 == ss2)
	{
		return (0);
	}
	while (--n)
	{
		while (ss1[i] == ss2[i] && ss1[i] != '\0' && ss2[i] != '\0')
		{
			i++;
		}
		return (ss1[i] - ss2[i]);
	}
	return (0);
}
