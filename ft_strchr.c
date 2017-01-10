/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: puttsche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/21 01:57:06 by puttsche          #+#    #+#             */
/*   Updated: 2016/11/21 01:57:09 by puttsche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		x;
	char	*sbis;
	int		y;

	y = ft_strlen(s);
	sbis = (char*)s;
	x = 0;
	while (x <= y)
	{
		if (sbis[x] == (char)c)
			return (&sbis[x]);
		x++;
	}
	return (NULL);
}
