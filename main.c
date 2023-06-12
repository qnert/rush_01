/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skunert <skunert@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 12:25:02 by skunert           #+#    #+#             */
/*   Updated: 2023/06/12 12:54:07 by skunert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush_01.h"

int	main(int argc, char **argv)
{
	char	**input;

	input = NULL;
	if (argc == 2)
	{
		input = ft_split(argv[1], ' ');
		if (check_input(input) == -1)
			printf("Wrong\n");
	}
	return (0);
}
