/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skunert <skunert@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 12:25:02 by skunert           #+#    #+#             */
/*   Updated: 2023/06/13 16:44:51 by skunert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush_01.h"

int	main(int argc, char **argv)
{
	int	clues[16];
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (argc == 2)
	{
		if (ft_strlen(argv[1]) != 31)
			return (write(2, "Error\n", 6), -1);
		if (check_type(argv[1]) == 0)
			return (write(2, "Error\n", 6), -1);
		while (j < 16)
		{
			clues[j] = ft_atoi(&argv[1][i]);
			i = i + 2;
			j++;
		}
		i = 0;
		while (i < 16)
		{
			printf("%d ", clues[i]);
			i++;
		}
	}
	else
		printf("Wrong amount of arguments\n");
	return (0);
}
