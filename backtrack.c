/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   backtrack.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skunert <skunert@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 14:41:57 by skunert           #+#    #+#             */
/*   Updated: 2023/06/16 11:55:23 by skunert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush_01.h"

int	count_skyscraper(int a, int b, int c, int d)
{
	int	i;
	int	count;
	int	max_height;
	int	tmp[4] = {a, b, c, d};

	i = 0;
	count = 0;
	max_height = 0;
	while (i < 4)
	{
		if (tmp[i] > max_height)
		{
			max_height = tmp[i];
			count++;
		}
		i++;
	}
	return (count);
}

int	is_solved(int board[4][4], int clues[16])
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (count_skyscraper(board[i][0], board[i][1], board[i][2], board[i][3]) != clues[8 + i])
			return (0);
		if (count_skyscraper(board[0][i], board[1][i], board[2][i], board[3][i]) != clues[i])
			return (0);
		i++;
	}
	i = 3;
	while (i >= 0)
	{
		if (count_skyscraper(board[3][i], board[2][i], board[1][i], board[0][i]) != clues[4 + (i * -1)])
			return (0);
		if (count_skyscraper(board[i][3], board[i][2], board[i][1], board[i][0]) != clues[12 + (i * -1)])
			return (0);
		i--;
	}
	return (1);
}

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
						if (row == 3 && col == 3 && is_solved(board, clues) == 1)
							return (1);
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
	return (0);
}
