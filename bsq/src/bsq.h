/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabel-co <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/13 18:55:57 by vjimenez          #+#    #+#             */
/*   Updated: 2021/03/18 17:22:39 by dabel-co         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BSQ_H
# define FT_BSQ_H
# define ERROR "Error\n"
# include <unistd.h>
# include <stdio.h>
# include <fcntl.h>
# include <stdlib.h>

int		ft_count_for_x(char *str);
int		ft_atoi(char *str);
char	ft_solve(char *c, int x, int y);
void	ft_map_error(void);
char	*ft_read(char *c);
#endif
