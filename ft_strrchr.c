/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: puttsche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 15:34:18 by puttsche          #+#    #+#             */
/*   Updated: 2016/11/14 15:42:03 by puttsche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		x;
	char	*sbis;
	int		y;

	x = ft_strlen(s);
	sbis = (char*)s;
	y = 0;
	while (x >= y)
	{
		if (sbis[x] == (char)c)
			return (&sbis[x]);
		x--;
	}
	return (NULL);
}
