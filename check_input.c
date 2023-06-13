/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skunert <skunert@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 12:31:17 by skunert           #+#    #+#             */
/*   Updated: 2023/06/13 15:58:38 by skunert          ###   ########.fr       */
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

int	check_type(char *input)
{
	int	i;

	i = 0;
	while (input[i] != '\0' && i <= 30)
	{
		if (input[i] < '1' || input[i] > '4')
			return (0);
		i = i + 2;
	}
	return (1);
}
