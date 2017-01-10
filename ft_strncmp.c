/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: puttsche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 19:23:39 by puttsche          #+#    #+#             */
/*   Updated: 2016/11/21 05:20:55 by puttsche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t		x;

	x = 0;
	while (x < n)
	{
		if (s1[x] != s2[x])
			return ((unsigned char)s1[x] - (unsigned char)s2[x]);
		if (s1[x] == '\0' && s2[x] == '\0')
			return (0);
		x++;
	}
	return (0);
}
