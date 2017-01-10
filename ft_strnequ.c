/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: puttsche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/15 15:39:18 by puttsche          #+#    #+#             */
/*   Updated: 2016/11/21 02:45:50 by puttsche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	int			x;
	int			len1;
	int			len2;
	size_t		i;

	if (s1 != NULL && s2 != NULL)
	{
		x = 0;
		i = 0;
		len1 = ft_strlen(s1);
		len2 = ft_strlen(s2);
		if (len1 != len2)
			return (0);
		while (s1[x] && (i < n))
		{
			if (s1[x] != s2[x])
				return (0);
			x++;
			i++;
		}
	}
	return (1);
}
