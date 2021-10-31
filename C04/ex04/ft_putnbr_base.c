/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabel-co <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/14 13:03:31 by dabel-co          #+#    #+#             */
/*   Updated: 2021/03/17 14:22:38 by dabel-co         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_check_error(char *str)
{
	int c;
	int x;
	int i;

	i = 0;
	c = 0;
	while (str[i] != '\0')
		i++;
	while (str[c] != '\0')
	{
		x = c + 1;
		if (str[c] == '+' || str[c] == '-')
			return (0);
		while (x < i)
		{
			if (str[c] == str[x])
				return (0);
			else
				x++;
		}
		c++;
	}
	return (i);
}

void	ft_putnbr_base(int nb, char *base)
{
	int i;

	i = ft_check_error(base);
	if (i < 2)
		return ;
	if (nb == -2147483648 && i == 2)
	{
		ft_putchar('-');
		ft_putnbr_base(1, &base[0]);
		ft_putnbr_base(0, &base[0]);
		ft_putnbr_base(2147483648 / i, &base[0]);
		ft_putchar(base[2147483648 % i]);
	}
	else if (nb > i)
	{
		ft_putnbr_base(nb / i, &base[0]);
		ft_putchar(base[nb % i]);
	}
	else if (nb < 0)
	{
		ft_putchar('-');
		ft_putnbr_base(-nb, &base[0]);
	}
	else
		ft_putchar(base[nb]);
}
