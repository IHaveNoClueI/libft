/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isprint.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: keblazer <keblazer@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/29 11:22:44 by keblazer       #+#    #+#                */
<<<<<<< HEAD
/*   Updated: 2019/11/14 23:46:24 by keblazer      ########   odam.nl         */
=======
/*   Updated: 2019/11/15 02:56:26 by keblazer      ########   odam.nl         */
>>>>>>> refs/remotes/origin/master
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 33 && c <= 126)
	{
		return (1);
	}
	return (0);
}
