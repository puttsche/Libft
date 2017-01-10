/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: puttsche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/17 19:07:54 by puttsche          #+#    #+#             */
/*   Updated: 2016/11/21 05:31:36 by puttsche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char const *s, int fd)
{
	int		x;

	if (s != NULL)
	{
		x = 0;
		while (s[x])
		{
			ft_putchar_fd(s[x], fd);
			x++;
		}
		if (s[x] == '\0')
			ft_putchar_fd('\n', fd);
	}
}
