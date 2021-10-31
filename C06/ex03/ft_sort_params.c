/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabel-co <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 10:05:17 by dabel-co          #+#    #+#             */
/*   Updated: 2021/03/18 13:37:32 by dabel-co         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
	write(1, "\n", 1);
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		i++;
	return (s1[i] - s2[i]);
}

int		main(int argc, char **argv)
{
	int		i;
	int		c;
	char	*buffer;

	i = 0;
	while (i < argc)
	{
		c = i + 1;
		while (c < argc)
		{
			if ((ft_strcmp(argv[i], argv[c])) > 0)
			{
				buffer = argv[i];
				argv[i] = argv[c];
				argv[c] = buffer;
			}
			c++;
		}
		i++;
	}
	i = 0;
	while (++i < argc)
		ft_putstr(argv[i]);
}
