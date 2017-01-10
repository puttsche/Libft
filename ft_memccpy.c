/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: puttsche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/13 02:40:32 by puttsche          #+#    #+#             */
/*   Updated: 2016/11/13 04:43:22 by puttsche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t			x;
	unsigned char	*sc;
	unsigned char	*ds;
	unsigned char	y;

	y = (unsigned char)c;
	sc = (unsigned char*)src;
	ds = (unsigned char*)dest;
	x = 0;
	while (x < n)
	{
		ds[x] = sc[x];
		if (sc[x] == y)
			return (&ds[x + 1]);
		x++;
	}
	return (NULL);
}
