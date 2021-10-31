/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solve.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabel-co <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 17:06:11 by dabel-co          #+#    #+#             */
/*   Updated: 2021/03/18 20:02:12 by dabel-co         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"
#include <assert.h>
char	ft_solve(char *c, int x, int y)
{
	int		i;
	char	mymap[y + 1][x];

	y = ft_atoi(c);
	x = ft_count_for_x(c);
	printf("x igual a %d\n", x);
	i = 0;
	while (c[i] != '\n')
		i++;
	i++;
	printf("%lu\n", sizeof(mymap));
	while (c[i] != '\0')
	{
		x = 0;
		while (c[i] != '\n')
		{
			mymap[y][x] = c[i];
			assert(sizeof(mymap) > 15*15);
			write(1, &mymap[y][x], 1);
			x++;
			i++;
		}
		mymap[y][x] = '\n';
		write(1, &mymap[y][x], 1);
		i++;
		y++;
	}
	return (0);
}
