/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: puttsche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 18:12:36 by puttsche          #+#    #+#             */
/*   Updated: 2016/11/24 14:56:28 by puttsche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *li, size_t len)
{
	int		b;
	int		l;
	size_t	x;

	b = 0;
	x = 0;
	if (li[0] == '\0')
		return ((char*)&big[0]);
	while (big[b])
	{
		l = 0;
		if (big[b] == li[l])
		{
			while ((big[b + l] == li[l]) && (li[l]) && ((size_t)(b + l) <= len))
				l++;
			if (li[l] == '\0')
				return ((char*)&big[b]);
		}
		b++;
	}
	return (NULL);
}
