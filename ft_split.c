/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: keblazer <keblazer@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/11 17:12:41 by keblazer       #+#    #+#                */
/*   Updated: 2019/12/19 17:10:22 by keblazer      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_count_words(char const *s, char c)
{
	int i;
	int words;
	int isword;

	i = 0;
	words = 0;
	isword = 0;
	while (s[i] == c && s[i])
		i++;
	while (s[i])
	{
		if (s[i] != c && s[i])
			isword = 1;
		if (s[i] == c)
		{
			while (s[i] == c && s[i])
				i++;
			if (s[i])
				words++;
		}
		else
			i++;
	}
	return (words + isword);
}

char	*ft_mem_word(char const *s, char c)
{
	int		i;
	char	*tab;

	i = 0;
	tab = 0;
	while (s[i] && s[i] != c)
		i++;
	if (!(tab = (char *)malloc(sizeof(char) * (i + 1))))
		return (NULL);
	ft_strlcpy(tab, s, i + 1);
	return (tab);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		words;
	char	**tab;

	i = -1;
	if (!s)
		return (NULL);
	words = ft_count_words(s, c);
	if (!(tab = malloc(sizeof(char *) * (words + 1))))
		return (NULL);
	while (++i < words)
	{
		while (s[0] == c)
			s++;
		if (!(tab[i] = ft_mem_word(s, c)))
		{
			while (i > 0)
				free(tab[i--]);
			free(tab);
			return (NULL);
		}
		s += ft_strlen(tab[i]);
	}
	tab[i] = 0;
	return (tab);
}
