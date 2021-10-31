/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabel-co <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 15:51:09 by dabel-co          #+#    #+#             */
/*   Updated: 2021/03/09 15:33:20 by dabel-co         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int i;
	int t;

	i = 0;
	t = 1;
	while (str[i] != '\0')
	{
		if (str[i] < 48 || (str[i] > 57 && str[i] < 65))
			t = 1;
		else if (str[i] > 122 || (str[i] > 90 && str[i] < 97))
			t = 1;
		else if (str[i] > 47 && str[i] < 58 && t == 1)
			t = 0;
		else if (str[i] > 96 && str[i] < 123 && t == 1)
		{
			str[i] = str[i] - 32;
			t = 0;
		}
		else if (str[i] > 64 && str[i] < 91 && t == 0)
			str[i] = str[i] + 32;
		else
			t = 0;
		i++;
	}
	return (str);
}
