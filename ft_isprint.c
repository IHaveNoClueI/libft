/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isprint.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: keblazer <keblazer@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/29 11:22:44 by keblazer       #+#    #+#                */
/*   Updated: 2019/11/21 01:43:56 by keblazer      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// TODO:
// [fail]: your isprint just doesn't work, REALLY ?!

int	ft_isprint(int c)
{
	if (c >= 33 && c <= 126)
	{
		return (1);
	}
	return (0);
}
