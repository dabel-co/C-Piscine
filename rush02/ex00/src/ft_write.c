/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_write.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabel-co <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/14 19:36:27 by dabel-co          #+#    #+#             */
/*   Updated: 2021/03/14 21:02:11 by dabel-co         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "library.h"

char	ft_putchar(char c)
{
	c = c + 48;
	write(1, &c, 1);
	write(1, "\n", 1);
	return (0);
}

void	ft_write(int p)
{
	if (p > 9)
	{
		ft_write(p / 10);
		ft_write(p % 10);
	}
	else
		ft_putchar(p);
}