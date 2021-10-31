/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabel-co <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 14:54:21 by dabel-co          #+#    #+#             */
/*   Updated: 2021/04/03 17:28:35 by dabel-co         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int	main(int argc, char **argv)
{
	char *x;

	x = malloc(sizeof(char) * 1100);
	if (argc == 2)
	{
		x = ft_read(argv[1]);
		ft_solve(x, 0, 0);
	}
	else
		ft_map_error();
	//the wonderbolts got in! :D
}
