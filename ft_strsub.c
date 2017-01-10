/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: puttsche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/15 15:53:05 by puttsche          #+#    #+#             */
/*   Updated: 2016/11/21 02:46:25 by puttsche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*dest;
	size_t	x;

	if (s != NULL)
	{
		x = 0;
		dest = (char*)malloc(sizeof(*dest) * (len + 1));
		if (dest == NULL)
			return (NULL);
		while (s[start] && (x < len))
		{
			dest[x] = s[start];
			start++;
			x++;
		}
		dest[x] = '\0';
		return (dest);
	}
	return (NULL);
}
