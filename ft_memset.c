/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memset.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: keblazer <keblazer@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/29 11:22:29 by keblazer       #+#    #+#                */
<<<<<<< HEAD
/*   Updated: 2019/11/15 00:21:18 by keblazer      ########   odam.nl         */
=======
/*   Updated: 2019/11/15 05:00:20 by keblazer      ########   odam.nl         */
>>>>>>> refs/remotes/origin/master
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
<<<<<<< HEAD
#include <strings.h>

void	*ft_memset(void *str, int c, size_t len)
{
    
=======
#include <string.h>

void	*ft_memset(void *b, int c, size_t len)
{
	char	*str;
	size_t	i;

	str = (char *)b;
	i = 0;
	while (i < len)
	{
		str[i] = (unsigned char)c;
		i++;
	}
	return (b);
>>>>>>> refs/remotes/origin/master
}
