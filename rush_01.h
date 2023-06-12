/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush_01.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skunert <skunert@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 12:37:06 by skunert           #+#    #+#             */
/*   Updated: 2023/06/12 12:54:22 by skunert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH_01_H
# define RUSH_01_H

# include <unistd.h>
# include <stdlib.h>
# include <stddef.h>
# include <stdio.h>

char	**ft_split(char const *s, char c);
void	free_arr(char **arr);
int		ft_atoi(const char *str);

#endif