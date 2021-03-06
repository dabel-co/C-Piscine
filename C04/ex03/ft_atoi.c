/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabel-co <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/13 14:07:09 by dabel-co          #+#    #+#             */
/*   Updated: 2021/03/17 14:02:27 by dabel-co         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int atoi;
	int n;

	i = 0;
	atoi = 0;
	n = 1;
	while (str[i] == ' ' || str[i] == '\v' || str[i] == '\v' ||
		str[i] == '\f' || str[i] == '\t' || str[i] == '\n')
	{
		i++;
	}
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			n = -n;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		atoi = atoi * 10 + (str[i] - '0');
		i++;
	}
	atoi = atoi * n;
	return (atoi);
}
