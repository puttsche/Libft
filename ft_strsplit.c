/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: puttsche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/22 03:21:09 by puttsche          #+#    #+#             */
/*   Updated: 2016/11/24 15:10:57 by puttsche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int			ft_countwords(char const *s, char c)
{
	int		x;
	int		words;

	x = 1;
	words = 0;
	if (s[0] != c)
		words++;
	while (s[x] != '\0')
	{
		if (s[x] != c && s[x - 1] == c)
			words++;
		x++;
	}
	return (words);
}

static int			ft_len(char const *s, char c, int x)
{
	int		len;

	len = 0;
	while (s[x] != c && s[x] != '\0')
	{
		x++;
		len++;
	}
	return (len);
}

static int			ft_fgw(char const *s, char c, int posword)
{
	int		d;
	int		len;
	int		word;

	d = 1;
	word = 0;
	if (s[0] != c)
		word++;
	if (posword == word)
		return (len = ft_len(s, c, 0));
	while (s[d] != '\0')
	{
		if (s[d] != c && s[d - 1] == c)
			word++;
		if (posword == word)
			return (len = ft_len(s, c, d));
		d++;
	}
	return (0);
}

char				**ft_strsplit(char const *s, char c)
{
	char		**dest;
	int			x;
	int			y;
	int			a;

	x = 0;
	y = 0;
	if (s == NULL || c == 0)
		return (NULL);
	if (!(dest = (char**)malloc(sizeof(char*) * ((ft_countwords(s, c)) + 1))))
		return (NULL);
	while (y < (ft_countwords(s, c)) && s[x])
	{
		a = 0;
		while (s[x] == c && s[x] != '\0')
			x++;
		if (!(dest[y] = (char*)malloc(sizeof(char) * (ft_fgw(s, c, (y)) + 1))))
			return (NULL);
		while (s[x] != c && s[x] != '\0')
			dest[y][a++] = s[x++];
		dest[y][a] = '\0';
		y++;
	}
	dest[y] = NULL;
	return (dest);
}
