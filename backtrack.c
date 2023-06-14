/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   backtrack.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skunert <skunert@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 14:41:57 by skunert           #+#    #+#             */
/*   Updated: 2023/06/14 14:56:17 by skunert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush_01.h"

int	solve_it(int board[4][4], int clues[16])
{
	int	row;
	int	col;
	int	nb;

	row = 0;
	while (row < 4)
	{
		col = 0;
		while (col < 4)
		{
			if (board[row][col] == 0)
			{
				nb = 1;
				while (nb <= 4)
				{
					if (check_col_row(board, nb, row, col) == 1)
					{
						board[row][col] = nb;
						if (solve_it(board, clues) == 1)
							return (1);
						else
							board[row][col] = 0;
					}
					nb++;
				}
				return (0);
			}
			col++;
		}
		row++;
	}
	return (1);
}
