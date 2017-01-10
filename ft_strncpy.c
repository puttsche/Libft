/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: puttsche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/12 21:47:57 by puttsche          #+#    #+#             */
/*   Updated: 2016/11/12 23:25:53 by puttsche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	size_t	x;
	size_t	srclen;

	x = 0;
	srclen = ft_strlen(src);
	while (x < n && src[x])
	{
		dest[x] = src[x];
		x++;
	}
	while (srclen < n)
	{
		dest[x++] = '\0';
		srclen++;
	}
	return (dest);
}
