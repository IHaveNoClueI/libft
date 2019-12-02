/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memdel.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: keblazer <keblazer@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/12/02 14:23:13 by keblazer       #+#    #+#                */
/*   Updated: 2019/12/02 14:25:47 by keblazer      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_memdel(void *p)
{
	if (p != NULL)
	{
		free(p);
		p = NULL;
	}
}
