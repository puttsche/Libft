/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: puttsche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 21:32:30 by puttsche          #+#    #+#             */
/*   Updated: 2016/11/21 02:40:19 by puttsche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strequ(char const *s1, char const *s2)
{
	int		x;
	int		len1;
	int		len2;

	if (s1 != NULL && s2 != NULL)
	{
		x = 0;
		len1 = ft_strlen(s1);
		len2 = ft_strlen(s2);
		if (len1 != len2)
			return (0);
		while (s1[x])
		{
			if (s1[x] != s2[x])
				return (0);
			x++;
		}
	}
	return (1);
}
