/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: puttsche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/13 05:12:15 by puttsche          #+#    #+#             */
/*   Updated: 2016/11/13 05:25:33 by puttsche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	size_t	x;
	int		a;
	int		b;

	x = 0;
	a = 0;
	b = 0;
	while (dest[a])
		a++;
	while (src[b] && x < n)
	{
		dest[a] = src[b];
		a++;
		b++;
		x++;
	}
	dest[a] = '\0';
	return (dest);
}
