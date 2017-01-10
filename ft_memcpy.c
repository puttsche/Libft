/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: puttsche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/13 03:48:56 by puttsche          #+#    #+#             */
/*   Updated: 2016/11/13 04:43:43 by puttsche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			x;
	unsigned char	*sc;
	unsigned char	*ds;

	sc = (unsigned char*)src;
	ds = (unsigned char*)dest;
	x = 0;
	while (x < n)
	{
		ds[x] = sc[x];
		x++;
	}
	return (dest);
}
