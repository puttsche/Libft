/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: puttsche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/18 19:05:39 by puttsche          #+#    #+#             */
/*   Updated: 2016/11/21 02:48:04 by puttsche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*dest;
	int		x;

	if (s != NULL && (*f))
	{
		x = 0;
		dest = (char*)malloc(sizeof(*dest) * ft_strlen(s) + 1);
		if (dest == NULL)
			return (NULL);
		while (s[x])
		{
			dest[x] = f(s[x]);
			x++;
		}
		dest[x] = '\0';
		return (dest);
	}
	return (NULL);
}
