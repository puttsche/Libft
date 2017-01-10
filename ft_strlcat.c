/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: puttsche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/21 00:33:40 by puttsche          #+#    #+#             */
/*   Updated: 2016/11/21 01:35:26 by puttsche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t		x;
	size_t		y;
	size_t		len;

	x = 0;
	y = 0;
	len = (ft_strlen(dst) + ft_strlen(src));
	while (dst[x] && x < size - 1)
		x++;
	if (dst[x] != '\0' || !(size))
		return (ft_strlen(src) + size);
	while ((x + y) < size - 1 && src[y])
	{
		*(dst + (x + y)) = *(src + y);
		y++;
	}
	dst[x + y] = '\0';
	return (len);
}
