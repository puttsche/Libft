/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: puttsche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 15:43:45 by puttsche          #+#    #+#             */
/*   Updated: 2016/11/14 18:31:23 by puttsche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *big, const char *little)
{
	int		b;
	int		l;

	b = 0;
	if (little[0] == '\0')
		return ((char*)&big[0]);
	while (big[b])
	{
		l = 0;
		if (big[b] == little[l])
		{
			while ((big[b + l] == little[l]) && (little[l]))
				l++;
			if (little[l] == '\0')
				return ((char*)&big[b]);
		}
		b++;
	}
	return (NULL);
}
