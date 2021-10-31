/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabel-co <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 15:17:08 by dabel-co          #+#    #+#             */
/*   Updated: 2021/03/15 12:21:32 by dabel-co         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int j;
	int l;

	l = 0;
	i = 0;
	j = 0;
	while (to_find[l] != '\0')
		l++;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		if (str[i] == to_find[j] && l == j + 1)
			return (&str[i - j]);
		else if (str[i] == to_find[j])
			j++;
		else if (str[i] != to_find[j])
			j = 0;
		i++;
	}
	return (0);
}
