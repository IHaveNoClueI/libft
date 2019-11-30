/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_max.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: keblazer <keblazer@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/30 14:39:44 by keblazer       #+#    #+#                */
/*   Updated: 2019/11/30 14:46:04 by keblazer      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_max(int num1, int num2)
{
	int result;

	if (num1 > num2)
	{
		result = num1;
	}
	else
	{
		result = num2;
	}
	return (result);
}
