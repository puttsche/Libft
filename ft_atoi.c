/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: puttsche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/12 20:31:10 by puttsche          #+#    #+#             */
/*   Updated: 2016/11/13 06:57:17 by puttsche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *nptr)
{
	int		x;
	int		nbr;
	int		neg;

	x = 0;
	nbr = 0;
	neg = 1;
	while ((nptr[x] == '\n') || (nptr[x] == '\f') || (nptr[x] == '\r') ||
			(nptr[x] == '\t') || (nptr[x] == '\v') || (nptr[x] == ' '))
		x++;
	if ((nptr[x] == '-') || (nptr[x] == '+'))
	{
		if (nptr[x] == '-')
			neg = -1;
		x++;
	}
	while ((nptr[x]) && ((nptr[x] >= '0') && (nptr[x] <= '9')))
	{
		nbr = nbr * 10 + nptr[x] - '0';
		x++;
	}
	return (neg * nbr);
}
