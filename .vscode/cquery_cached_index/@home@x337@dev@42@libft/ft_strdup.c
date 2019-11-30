/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strdup.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: keblazer <keblazer@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/11 17:12:37 by keblazer       #+#    #+#                */
/*   Updated: 2019/11/25 14:21:29 by keblazer      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	char	*new;
	int		len;
	int		i;

	i = 0;
	len = 0;
	while (s1[len])
	{
		len++;
	}
	new = (char *)malloc(len * sizeof(*s1) + 1);
	if (!new)
	{
		return (NULL);
	}
	while (i < len)
	{
		new[i] = s1[i];
		i++;
	}
	new[len] = '\0';
	return (new);
	free(new);
}
