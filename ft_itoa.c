/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_itoa.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: keblazer <keblazer@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/11 17:13:19 by keblazer       #+#    #+#                */
/*   Updated: 2019/12/16 14:41:28 by keblazer      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		absolute(int nbr)
{
	if (nbr < 0)
	{
		return (-nbr);
	}
	return (nbr);
}

int		get_len(int nbr)
{
	int len;

	len = 0;
	if (nbr <= 0)
	{
		len++;
	}
	while (nbr != 0)
	{
		len++;
		nbr = nbr / 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*result;
	int		len;

	len = get_len(n);
	result = malloc(sizeof(char) * (len + 1));
	result[len] = '\0';
	if (n < 0)
	{
		result[0] = '-';
	}
	else if (n == 0)
	{
		result[0] = '0';
	}
	while (n != 0)
	{
		--len;
		result[len] = absolute(n % 10) + '0';
		n = n / 10;
	}
	return (result);
}
