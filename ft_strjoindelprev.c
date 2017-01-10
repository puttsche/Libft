/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoindelprev.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: puttsche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/10 03:24:36 by puttsche          #+#    #+#             */
/*   Updated: 2017/01/10 03:30:59 by puttsche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoindelprev(char *s1, char *s2)
{
	int			x;
	int			x2;
	char		*d;
	char		*tmp;

	if (s1 != NULL && s2 != NULL)
	{
		x = 0;
		x2 = 0;
		tmp = s2;
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
		free (tmp);
		return (d);
	}
	return (NULL);
}
