/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabel-co <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 16:48:23 by dabel-co          #+#    #+#             */
/*   Updated: 2021/03/16 11:57:51 by dabel-co         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	destsize;
	unsigned int	srcsize;
	unsigned int	i;

	destsize = 0;
	srcsize = 0;
	i = 0;
	while (dest[destsize] != '\0')
		destsize++;
	while (src[srcsize] != '\0')
		srcsize++;
	if (size < destsize)
		srcsize = srcsize + size;
	else
		srcsize = srcsize + destsize;
	while (src[i] != '\0' && size - destsize - 1)
	{
		dest[destsize] = src[i];
		destsize++;
		i++;
	}
	dest[destsize] = '\0';
	return (srcsize);
}
