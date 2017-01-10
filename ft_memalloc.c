/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: puttsche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 20:21:51 by puttsche          #+#    #+#             */
/*   Updated: 2016/11/14 20:34:16 by puttsche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	char	*dest;
	size_t	x;

	x = 0;
	dest = (char*)malloc(sizeof(*dest) * (size));
	if (dest == NULL)
		return (NULL);
	while (size > x)
	{
		dest[x] = '\0';
		x++;
	}
	return (dest);
}
