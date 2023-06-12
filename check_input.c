/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skunert <skunert@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 12:31:17 by skunert           #+#    #+#             */
/*   Updated: 2023/06/12 12:53:57 by skunert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush_01.h"

int	get_len_matrix(char **matrix)
{
	int	i;

	i = 0;
	while (matrix[i] != NULL)
		i++;
	return (i);
}

int	check_input(char **input)
{
	if (get_len_matrix(input) != 16)
		return (-1);
	if (check_length(input) == -1)
		return (-1);
}
