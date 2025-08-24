/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahabbard <ahabbard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/23 22:10:21 by ahabbard          #+#    #+#             */
/*   Updated: 2025/08/23 22:19:38 by ahabbard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_anyway_i_started_blasting.h"
#include <stdio.h>
#include <unistd.h>

// usefull function to print nbr or array

void	ft_putnbr(int nbr)
{
	char	c;

	if (nbr >= 10)
		ft_putnbr(nbr / 10);
	c = nbr % 10 + '0';
	write(1, &c, 1);
}

void	ft_putnbr_array(int *arr, int size)
{
	int	index;

	index = 0;
	while (index < size)
	{
		printf("%d --> \n", index);
		ft_putnbr(arr[index]);
		write(1, "\n", 1);
		index++;
	}
}

void	ft_putstr(char *str)
{
	int	index;

	index = 0;
	while (str[index])
	{
		write(1, &str[index], 1);
		index++;
	}
	write(1, "\n", 1);
}
