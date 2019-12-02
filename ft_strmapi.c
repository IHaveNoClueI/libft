/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strmapi.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: keblazer <keblazer@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/11 17:12:28 by keblazer       #+#    #+#                */
/*   Updated: 2019/12/02 15:42:22 by keblazer      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	size;
	unsigned int	i;
	char			*newstr;

	size = ft_strlen(s);
	if (!(newstr = (char*)malloc(sizeof(char) * size + 1)))
	{
		return (NULL);
	}
	i = -1;
	while (++i < size)
	{
		if (s && f)
		{
			newstr[i] = f(i, s[i]);
		}
	}
	newstr[i] = '\0';
	return (newstr);
}
