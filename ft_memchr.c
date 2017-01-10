/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: puttsche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/13 04:25:15 by puttsche          #+#    #+#             */
/*   Updated: 2016/11/13 04:38:24 by puttsche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			x;
	unsigned char	*sc;
	unsigned char	y;

	y = (unsigned char)c;
	sc = (unsigned char*)s;
	x = 0;
	while (x < n)
	{
		if (sc[x] == y)
			return (&sc[x]);
		x++;
	}
	return (NULL);
}
