/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: keblazer <keblazer@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/29 11:22:33 by keblazer       #+#    #+#                */
/*   Updated: 2019/11/21 02:18:51 by keblazer      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//	TODO:
//	[KO]: your atoi does not work with over long max value
//	[KO]: your atoi does not work with over long min value

int	ft_atoi(const char *str)
{
	int				i;
	long long int	result;
	long long int	negative;

	result = 0;
	negative = 1;
	i = 0;
	while (str[i] == 9 || str[i] == 10 || str[i] == 11 || str[i] == 12 ||
			str[i] == 13 || str[i] == 32)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		negative = -1;
		i++;
	}
	while (str[i])
	{
		if (str[i] < 48 || 57 < str[i])
			return (result * negative);
		else
			result = (result * 10) + (long long int)(str[i] - '0');
		i++;
	}
	return (result * negative);
}
