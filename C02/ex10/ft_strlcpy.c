/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_strlcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabel-co <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 09:50:23 by dabel-co          #+#    #+#             */
/*   Updated: 2021/03/11 12:00:38 by dabel-co         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	int				c;

	i = 0;
	c = 0;
	while (src[c] != '\0')
		c++;
	while (i < size)
	{
		if (i == size - 1)
			dest[i] = '\0';
		else
			dest[i] = src[i];
		i++;
	}
	return (c);
}
