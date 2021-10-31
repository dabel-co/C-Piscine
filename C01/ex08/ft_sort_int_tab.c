/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabel-co <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 14:42:52 by dabel-co          #+#    #+#             */
/*   Updated: 2021/03/04 16:25:51 by dabel-co         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int x;
	int xx;
	int aux;

	x = 0;
	xx = 0;
	while (x < size)
	{
		xx = x + 1;
		while (xx < size)
		{
			if (tab[x] > tab[xx])
			{
				aux = tab[x];
				tab[x] = tab[xx];
				tab[xx] = aux;
				xx++;
			}
			else if (tab[x] < tab[xx])
				xx++;
		}
		x++;
	}
}
