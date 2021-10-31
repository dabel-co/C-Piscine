/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabel-co <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 11:33:56 by dabel-co          #+#    #+#             */
/*   Updated: 2021/03/12 12:04:24 by dabel-co         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char d)
{
	write(1, &d, 1);
}

void	ft_hex(unsigned char a)
{
	char	*hexa;
	int		x;
	int		y;

	hexa = "0123456789abcdef";
	x = a / 16;
	y = a % 16;
	ft_putchar(92);
	ft_putchar(hexa[x]);
	ft_putchar(hexa[y]);
}

void	ft_putstr_non_printable(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32)
		{
			ft_hex(str[i]);
			i++;
		}
		else
		{
			ft_putchar(str[i]);
			i++;
		}
	}
}
