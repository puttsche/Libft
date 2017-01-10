/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: puttsche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 18:45:33 by puttsche          #+#    #+#             */
/*   Updated: 2016/11/14 21:12:05 by puttsche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			y;
	unsigned char	*ss1;
	unsigned char	*ss2;

	y = 0;
	ss1 = (unsigned char*)s1;
	ss2 = (unsigned char*)s2;
	while (n--)
	{
		if (ss1[y] != ss2[y])
			return (ss1[y] - ss2[y]);
		y++;
	}
	return (0);
}
