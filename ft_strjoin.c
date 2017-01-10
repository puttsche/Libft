/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: puttsche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/15 16:58:44 by puttsche          #+#    #+#             */
/*   Updated: 2016/11/21 04:41:04 by puttsche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		x;
	int		x2;
	char	*d;

	if (s1 != NULL && s2 != NULL)
	{
		x = 0;
		x2 = 0;
		d = (char*)malloc(sizeof(*d) * (ft_strlen(s1) + ft_strlen(s2) + 1));
		if (d == NULL)
			return (NULL);
		while (s1[x])
		{
			d[x] = s1[x];
			x++;
		}
		while (s2[x2])
		{
			d[x + x2] = s2[x2];
			x2++;
		}
		d[x + x2] = '\0';
		return (d);
	}
	return (NULL);
}
