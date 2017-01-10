/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: puttsche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 18:57:47 by puttsche          #+#    #+#             */
/*   Updated: 2016/11/10 17:58:40 by puttsche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcmp(const char *s1, const char *s2)
{
	int		x;

	x = 0;
	while (s1[x] && s2[x] && (s1[x] == s2[x]))
		x++;
	return ((unsigned char)s1[x] - (unsigned char)s2[x]);
}
