/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabel-co <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 15:46:39 by dabel-co          #+#    #+#             */
/*   Updated: 2021/03/22 16:35:13 by wasp             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"
#include <assert.h>

char	*ft_read(char *c)
{
	int			x;
	char		*map;
	ssize_t		byte_count;

	map = malloc(sizeof(char) * 600);
	x = open(c, O_RDONLY);
	if (x == -1)
		write(1, "map error\n", 10);
	else
	{
		byte_count = read(x, map, sizeof(char) * 600);
		assert(byte_count <= (sizeof(char) * 600));
		close(x);
		free(map);
		if (byte_count == 0)
		{
			write(1, "Dict error\n", 11);
			return (0);
		}
		else
			return (map);
	}
	return (0);
}
