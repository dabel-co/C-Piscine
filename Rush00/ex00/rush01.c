/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mama.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elmartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/27 16:51:22 by elmartin          #+#    #+#             */
/*   Updated: 2021/02/28 16:08:40 by dabel-co         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int v;
	int h;

	v = 0;
	while (++v <= y)
	{
		h = 0;
		while (++h <= x)
		{
			if ((h == 1 && v == 1) || (h == x && v == y))
				ft_putchar('/');
			else if ((h == x && v == 1) || (h == 1 && v == y))
				ft_putchar(92);
			else if ((h == 1 || h == x) || (v == 1 || v == y))
				ft_putchar('*');
			else
				ft_putchar(' ');
		}
		ft_putchar('\n');
	}
}
