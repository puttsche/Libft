/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: puttsche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/19 04:56:32 by puttsche          #+#    #+#             */
/*   Updated: 2016/11/21 04:44:42 by puttsche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void			ft_sign(int *n, int *signe)
{
	if (*n < 0)
	{
		*signe = 1;
		*n = *n * -1;
	}
}

static void			ft_assign(char *dest, int n, int x)
{
	if (n > 0)
		ft_assign(dest, n / 10, --x);
	dest[x] = n % 10 + 48;
}

char				*ft_itoa(int n)
{
	char	*dest;
	int		compt;
	int		x;
	int		signe;

	dest = NULL;
	signe = 0;
	if ((x = 0) || n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n == 0)
		return (ft_strdup("0"));
	ft_sign(&n, &signe);
	compt = n;
	while (compt != 0 && ++x)
		compt = compt / 10;
	if (!(dest = ft_strnew(x + signe)))
		return (NULL);
	if (signe == 1)
	{
		dest[0] = '-';
		ft_assign(&dest[1], n, x);
	}
	else
		ft_assign(dest, n, x);
	return (dest);
}
