/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: puttsche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/15 17:13:58 by puttsche          #+#    #+#             */
/*   Updated: 2016/11/21 04:45:42 by puttsche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		*ft_transfert(char *dest, char const *s, int len, int x)
{
	int		y;

	y = 0;
	if (dest == NULL)
		return (NULL);
	while (y <= len)
	{
		dest[y] = s[x];
		y++;
		x++;
	}
	dest[y] = '\0';
	return (dest);
}

char			*ft_strtrim(char const *s)
{
	char	*dest;
	int		x;
	int		len;

	x = 0;
	if (s == NULL)
		return (NULL);
	len = ft_strlen(s);
	len--;
	while (s[len] == ' ' || s[len] == '\n' || s[len] == '\t')
		len--;
	while (s[x] == ' ' || s[x] == '\n' || s[x] == '\t')
	{
		len--;
		x++;
	}
	if (len <= 0)
		len = 0;
	dest = (char*)malloc(sizeof(char) * (len + 1) + 1);
	return (ft_transfert(dest, s, len, x));
}
