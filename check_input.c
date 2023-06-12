/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skunert <skunert@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 12:31:17 by skunert           #+#    #+#             */
/*   Updated: 2023/06/12 14:19:26 by skunert          ###   ########.fr       */
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

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	check_type(char **input)
{
	int	i;

	i = 0;
	while (input[i] != NULL)
	{
		if (input[i][0] < '1' || input[i][0] > '4')
			return (0);
		i++;
	}
	return (1);
}

int	check_input(char **input)
{
	int	i;

	i = 0;
	if (get_len_matrix(input) != 16)
		return (0);
	while (input[i] != NULL)
	{
		if (ft_strlen(input[i]) != 1)
			return (0);
		i++;
	}
	if (check_type(input) == 0)
		return (0);
	return (1);
}
