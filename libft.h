/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   libft.h                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: keblazer <keblazer@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/01 16:01:20 by keblazer       #+#    #+#                */
/*   Updated: 2019/11/15 00:45:41 by keblazer      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef _LIBFT_H
# define _LIBFT_H
# include <unistd.h>
# include <stdlib.h>
# include <strings.h>

int		ft_atoi(char *str);
void	ft_bzero(void *s, size_t n);
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
void	ft_putchar(int c);
size_t	ft_strlen(const char *s);
int		ft_tolower(int c);
int		ft_toupper(int c);
void	*ft_memset(void *b, int c, size_t len);

#endif
