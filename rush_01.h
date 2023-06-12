/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush_01.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skunert <skunert@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 12:37:06 by skunert           #+#    #+#             */
/*   Updated: 2023/06/12 13:53:19 by skunert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH_01_H
# define RUSH_01_H

# include <unistd.h>
# include <stdlib.h>
# include <stddef.h>
# include <stdio.h>

char	**ft_split(char const *s, char c);
void	free_matrix(char **arr);
int		ft_atoi(const char *str);
void	*ft_calloc(size_t nitems, size_t size);
int		check_input(char **input);

#endif