/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahabbard <ahabbard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/23 22:10:15 by ahabbard          #+#    #+#             */
/*   Updated: 2025/08/24 23:34:14 by ahabbard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_anyway_i_started_blasting.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	main(int argc, char **argv)
{
	int		size;
	int		size_arr;
	int		*array_of_infinity;
	char	**dict_of_infinity;

	if (!ft_check_arg(argc, argv))
	{
		write(1, "Wrong input\n", 12);
		return (0);
	}
	size = ft_strlen(argv[1]);
	array_of_infinity = ft_ultimate_parsing(argv[1], size, &size_arr);
	dict_of_infinity = dict_to_array("numbers.dict");
	ft_put_any_number(array_of_infinity, dict_of_infinity, size_arr);
	free(dict_of_infinity);
	free(array_of_infinity);
	return (0);
}
