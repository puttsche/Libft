/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: puttsche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 18:44:51 by puttsche          #+#    #+#             */
/*   Updated: 2016/11/09 20:42:59 by puttsche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		x;
	int		y;
	char	*dest;

	y = 0;
	x = ft_strlen(s);
	dest = NULL;
	dest = (char*)malloc(sizeof(*dest) * (x + 1));
	if (dest == NULL)
		return (NULL);
	while (s[y])
	{
		dest[y] = s[y];
		y++;
	}
	dest[y] = '\0';
	return (dest);
}
