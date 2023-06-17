/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skunert <skunert@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 12:25:02 by skunert           #+#    #+#             */
/*   Updated: 2023/06/17 15:27:23 by skunert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush_01.h"

void	ft_fill_clues(char **argv, int *clues)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < 16)
	{
		clues[i] = ft_atoi(&argv[1][j]);
		j = j + 2;
		i++;
	}
}

void	ft_fill_board(int board[4][4])
{
	int	i;
	int	j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			board[i][j] = 0;
			j++;
		}
		i++;
	}
}

void	ft_print_board(int board[4][4])
{
	int	i;
	int	j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			printf("%d", board[i][j]);
			if (j != 3)
				printf(" ");
			j++;
		}
		printf("\n");
		i++;
	}
}

int	check_col_row(int board[4][4], int nb, int row, int col)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (board[i][col] == nb || board[row][i] == nb)
			return (0);
		i++;
	}
	return (1);
}

int	main(int argc, char **argv)
{
	int	board[4][4];
	int	clues[16];

	if (argc == 2)
	{
		if (ft_strlen(argv[1]) != 31)
			return (write(1, "Error\n", 6), -1);
		if (check_type(argv[1]) == 0)
			return (write(1, "Error\n", 6), -1);
		ft_fill_clues(argv, clues);
		ft_fill_board(board);
		if (solve_it(board, clues) == 1)
			ft_print_board(board);
		else
			write(1, "Error\n", 6);
	}
	else
		write(1, "Error\n", 6);
	return (0);
}
