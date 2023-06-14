/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush_01.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skunert <skunert@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 12:37:06 by skunert           #+#    #+#             */
/*   Updated: 2023/06/14 14:56:23 by skunert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH_01_H
# define RUSH_01_H

# include <unistd.h>
# include <stdlib.h>
# include <stddef.h>
# include <stdio.h>

int		ft_atoi(const char *str);
int		ft_strlen(char *str);
int		check_type(char *input);
void	ft_fill(char **argv, int **board, int *clues);
int		check_col_row(int board[4][4], int nb, int row, int col);
int		solve_it(int board[4][4], int clues[16]);

#endif