/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush_01.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skunert <skunert@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 12:37:06 by skunert           #+#    #+#             */
/*   Updated: 2023/06/14 11:40:30 by skunert          ###   ########.fr       */
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
int		ft_strlen(char *str);
int		check_type(char *input);
void	ft_fill(char **argv, int **board, int *clues);

#endif