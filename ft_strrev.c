/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strrev.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: keblazer <keblazer@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/12/10 16:48:29 by keblazer       #+#    #+#                */
/*   Updated: 2019/12/10 16:50:09 by keblazer      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrev(char *s)
{
	int		i;
	int		len;
	char	*string2;

	i = 0;
	len = ft_strlen(s);
	string2 = (char *)malloc(sizeof(char) * (len + 1));
	while (len--)
	{
		string2[i++] = s[len];
	}
	string2[i] = '\0';
	return (string2);
}
