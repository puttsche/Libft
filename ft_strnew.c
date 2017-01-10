/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: puttsche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 20:11:48 by puttsche          #+#    #+#             */
/*   Updated: 2016/11/14 20:33:01 by puttsche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*dest;
	size_t	x;

	x = 0;
	dest = (char*)malloc(sizeof(*dest) * (size + 1));
	if (dest == NULL)
		return (NULL);
	while (size > x)
	{
		dest[x] = '\0';
		x++;
	}
	dest[x] = '\0';
	return (dest);
}
