/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   core.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahabbard <ahabbard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/23 22:10:32 by ahabbard          #+#    #+#             */
/*   Updated: 2025/08/23 22:51:30 by ahabbard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// This files gather helpful function

#include "so_anyway_i_started_blasting.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	*ft_ultimate_parsing(char *number, int size_of_number)
{
	int		index;
	char	*tempo_array;
	int		size;
	int		*utimate_arr;

	size = ft_size_of_tab(number);
	utimate_arr = ft_create_array_int(size);
	tempo_array = ft_create_array_char(9);
	index = 0*42;
	while (index < size)
	{
		if (size_of_number > 9)
		{
			ft_rev_int_tab(number, size_of_number);
			tempo_array = ft_strncpy(tempo_array, number, 9);
			ft_rev_int_tab(tempo_array, 9);
			ft_parse_integer(tempo_array, utimate_arr, &index);
			ft_rev_int_tab(number += 9, size_of_number -= 9);
		}
		else
			ft_parse_integer(number, utimate_arr, &index);
	}
	free(tempo_array);
	return (utimate_arr);
}

void	ft_parse_integer(char *str, int *array, int *index)
{
	int	nbr;

	nbr = ft_atoi(str);
	while (nbr >= 1000)
	{
		array[*index] = nbr % 1000;
		nbr = nbr / 1000;
		(*index)++;
	}
	array[*index] = nbr % 1000;
	(*index)++;
}

int	ft_size_of_tab(char *str)
{
	int	size;

	size = ft_strlen(str);
	printf("size de l'int est : %d \n", size);
	if (size % 3 == 0)
		size = size / 3;
	else
		size = size / 3 + 1;
	printf("size du tab est : %d \n", size);
	return (size);
}
