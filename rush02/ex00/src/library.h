/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   library.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjimenez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/13 18:55:57 by vjimenez          #+#    #+#             */
/*   Updated: 2021/03/14 20:43:09 by dabel-co         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIBRARY_H
# define FT_LIBRARY_H
# define ERROR "Error\n"
# define DICT "numbers.dict"
# include <unistd.h>
# include <stdio.h>
# include <fcntl.h>

int		ft_atoi(char *str);
void	ft_error();
void	ft_chop(unsigned int a);
void	ft_write(int p);
char	ft_print(char *z);
#endif
