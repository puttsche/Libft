/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: puttsche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/18 19:18:20 by puttsche          #+#    #+#             */
/*   Updated: 2016/11/21 02:47:34 by puttsche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*dest;
	unsigned int	x;

	if (s != NULL && (*f))
	{
		x = 0;
		dest = (char*)malloc(sizeof(*dest) * ft_strlen(s) + 1);
		if (dest == NULL)
			return (NULL);
		while (s[x])
		{
			dest[x] = f(x, s[x]);
			x++;
		}
		dest[x] = '\0';
		return (dest);
	}
	return (NULL);
}
