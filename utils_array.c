/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahabbard <ahabbard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/23 22:10:39 by ahabbard          #+#    #+#             */
/*   Updated: 2025/08/23 23:12:38 by ahabbard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_anyway_i_started_blasting.h"
#include <stdlib.h>

char	*ft_create_array_char(unsigned int size)
{
	char	*arr;

	arr = (char *)malloc((size) * sizeof(char));
	if (arr == NULL)
		return (0);
	return (arr);
}

int	*ft_create_array_int(unsigned int size)
{
	int	*arr;

	arr = (int *)malloc((size) * sizeof(int));
	if (arr == NULL)
		return (0);
	return (arr);
}

char	**ft_create_array_char_2d(unsigned int size_rows, unsigned int size_columns)
{
	char	**arr;
	int	columns;

	columns = 0;
	arr = (char **)malloc((size_rows) * sizeof(char *));
	if (arr == NULL)
		return (0);
	while (columns < size_rows)
	{
		arr[columns] = malloc(size_columns*sizeof(char));
		if(arr[columns] == NULL)
			return (0);
		columns++;
	}
	return (arr);
}