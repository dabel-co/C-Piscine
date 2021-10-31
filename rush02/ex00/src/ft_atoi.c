/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabel-co <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/13 14:07:09 by dabel-co          #+#    #+#             */
/*   Updated: 2021/03/14 19:29:57 by dabel-co         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "library.h"

int	ft_atoi(char *str)
{
	int				i;
	unsigned int	atoi;

	i = 0;
	atoi = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
			atoi = atoi * 10 + (str[i] - 48);
		if (str[i] == '-')
		{
			ft_error();
			return (0);
		}
		i++;
	}
	return (atoi);
}
