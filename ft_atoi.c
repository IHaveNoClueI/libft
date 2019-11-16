/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: keblazer <keblazer@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/29 11:22:33 by keblazer       #+#    #+#                */
/*   Updated: 2019/11/14 23:54:50 by keblazer      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(char *str)
{
	int result;
	int negative;
	int i;

	result = 0;
	negative = 1;
	i = 0;
	if (str[0] == '-')
	{
		negative = -1;
		i++;
	}
	while (str[i] != '\0')
	{
		result = result * 10 + str[i] - '0';
		i++;
	}
	return (negative * result);
}
