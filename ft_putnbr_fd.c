/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putnbr_fd.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: keblazer <keblazer@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/11 17:12:45 by keblazer       #+#    #+#                */
/*   Updated: 2019/12/10 15:21:44 by keblazer      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int nb, int fd)
{
	if (nb < -9 || nb > 9)
		ft_putnbr_fd(nb / 10, fd);
	if (nb < 0)
	{
		if (nb >= -9)
			ft_putchar_fd('-', fd);
		ft_putchar_fd('0' - (nb % 10), fd);
	}
	else
		ft_putchar_fd('0' + (nb % 10), fd);
}
