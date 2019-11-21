/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putchar.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: keblazer <keblazer@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/01 11:18:30 by keblazer       #+#    #+#                */
/*   Updated: 2019/11/21 01:40:58 by keblazer      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

// TODO:
// [KO]: your putchar does not work with unicode
void	ft_putchar(int c)
{
	write(1, &c, 1);
}
