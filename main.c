/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahabbard <ahabbard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/23 22:10:15 by ahabbard          #+#    #+#             */
/*   Updated: 2025/08/24 08:54:44 by ahabbard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_anyway_i_started_blasting.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	main(int argc, char **argv)
{
	int *arr;
	int size;
	int size_arr;
	int *ARRAY_OF_INFINITY;
	char **DICT_OF_INFINITY;
	char number[] = "3123123112311";
// 	5 678 100 200 300 400 500 600 700 800 900;
	printf("\n\nl'enter en input est : %s\n\n", number);

	size = ft_strlen(number);
	ARRAY_OF_INFINITY = ft_ultimate_parsing(number,size,  &size_arr);

	// bellow this is meant to display the ARRAY_OF_INFINITY. you can delete it
	// char cpy_number[] = "12";
	// printf("\n\nl'enter en input est : %s\n\n", cpy_number);
	// int size_tab;
	// size_tab = ft_size_of_tab(cpy_number);
	// ft_putnbr_array(ARRAY_OF_INFINITY, size_tab);
	// end of display testing


	int		n;
	
	DICT_OF_INFINITY = dict_to_array("numbers.dict", &n);
	// i = 0;
	// while (i < n)
	// {
	// 	printf("%s\n", DICT_OF_INFINITY[i]);
	// 	free(DICT_OF_INFINITY[i]);
	// 	i++;
	// }

	ft_put_any_number(ARRAY_OF_INFINITY,DICT_OF_INFINITY, size_arr);

	
	free(DICT_OF_INFINITY);
	return (0);
}