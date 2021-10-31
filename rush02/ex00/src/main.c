/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabel-co <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/13 10:48:55 by dabel-co          #+#    #+#             */
/*   Updated: 2021/03/14 19:23:10 by dabel-co         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "library.h"

int		main(int argc, char **argv)
{
	unsigned int x;

	x = 0;
	if (argc == 2)
		x = ft_atoi(argv[1]);
	if (argc == 3)
		x = ft_atoi(argv[2]);
	if (argc < 2 || argc > 3)
	{
		ft_error();
		return (0);
	}
	ft_chop(x);
	return (0);
}
