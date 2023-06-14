/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isvalid.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skunert <skunert@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 11:45:34 by skunert           #+#    #+#             */
/*   Updated: 2023/06/14 12:54:40 by skunert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// int	check_col(int board[4][4], int nb, int col)
// {
// 	int	i;

// 	i = 0;
// 	while (i < 4)
// 	{
// 		if (board[i][col] == nb)
// 			return (0);
// 		i++;
// 	}
// 	return (1);
// }

// int	check_row(int board[4][4], int nb, int row)
// {
// 	int	i;

// 	i = 0;
// 	while (i < 4)
// 	{
// 		if (board[row][i] == nb)
// 			return (0);
// 		i++;
// 	}
// 	return (1);
// }

// int	check_clues(int nb, int col, int row)
// {

// }

// int	is_valid_position(int board[4][4], int nb, int row, int col)
// {
// 	if (check_col(board, nb, col) == 0)
// 		return (0);
// 	if (check_row(board, nb, row) == 0)
// 		return (0);
// }