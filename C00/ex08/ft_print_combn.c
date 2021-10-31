/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabel-co <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 10:48:48 by dabel-co          #+#    #+#             */
/*   Updated: 2021/03/10 16:31:38 by dabel-co         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}
void	ft_print_comb(int n)
{
	
	char x[10];
	int 	i;
	char	r;

	i = 0;
	r = '1';
	while (i < n)
	{
		x[i] = r;
		i++;
		r++;
	}
	x[i] = '\0';
	//llamar write aqui
	ft_calculo(*x, n, 1)
}

void	ft_calculo(char *x, int n, int recursive)
{
	int i;
	
	i = n - recursive;
	while (x[i] <= '9')
	{
		x[i] = x[i] + 1;
		//llamar writte
	}
	if 
}


int	main()
{
	int n;

	n = 5;
	ft_print_comb(n);
}
