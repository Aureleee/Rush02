/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   extra.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahabbard <ahabbard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/23 22:29:07 by ahabbard          #+#    #+#             */
/*   Updated: 2025/08/24 23:33:01 by ahabbard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_anyway_i_started_blasting.h"
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>

int	ft_is_space(char c)
{
	return (c == ' ' || c == '\t' || c == '\r');
}

// read the whole file. then we will sort it :)
char	*ft_file_to_string(const char *path, int *out_n)
{
	int		fd;
	int		n;
	char	*all;

	all = (char *)malloc(1000);
	fd = open(path, O_RDONLY);
	n = read(fd, all, 1000);
	close(fd);
	all[n] = '\0';
	*out_n = n;
	return (all);
}

/* int	ft_count_words(char *all)
{
	int	i;
	int	cnt;
	int	index;
	int	valide;
	int	index;
	int	valide;

	i = 0;
	cnt = 0;
	while (all[i])
	{
		if (all[i] == ':')
			cnt++;
		i++;
	}
	return (cnt);
} */
int	ft_is_int(char *str, int length)
{
	index = 0;
	valide = 1;
	while (index < length && valide)
	{
		if (str[index] < 48 || str[index] > 57)
			valide = 0;
		index++;
	}
	return (valide);
}
int	ft_is_dozen(int number)
{
	int	pos;

	pos = -1;
	if (number < 101 && (number % 10 == 0))
	{
		pos = number / 10 + 18;
	}
	return (pos);
}

int	ft_is_power_of_ten(char *str, int length)
{
	int	pos;
	int	index;
	int	valide;

	index = 0;
	pos = -1;
	if (str[index] != '1')
		valide = 0;
	index++;
	while (index < length && valide)
	{
		if (str[index] != '0')
			valide = 0;
		index++;
	}
	printf("\nindex = %d\n", index);
	if ((index - 1) % 3 == 0)
		pos = (index) / 3 + 27;
	return (pos);
}

int	ft_check_key(char *str, int length)
{
	int	index;
	int	pos;
	int	number;

	pos = -1;
	index = 0;
	if (ft_is_int(str, length))
	{
		if (length < 4)
		{
			number = ft_atoi(str);
			if (number > -1 && number < 20)
				pos = number;
			else
				pos = ft_is_dozen(number);
		}
		else
			pos = ft_is_power_of_ten(str, length);
	}
	return (pos);
}

char	**ft_fill_words(char **out, char *all)
{
	int		i;
	int		length_number;
	int		valide;
	char	*tempo_array;
	int		pos;
	int		j;

	pos = -1;
	i = 0;
	while (all[i])
	{
		valide = 1;
		length_number = 0;
		while (all[i + length_number] != ':' && valide)
		{
			if (all[i + length_number] == '\n')
				valide = 0;
			length_number++;
		}
		if (valide)
		{
			tempo_array = malloc(sizeof(char) * (length_number + 1));
			tempo_array = ft_strncpy(tempo_array, all, length_number);
			pos = ft_check_key(tempo_array, length_number);
		}
		if (pos != -1)
		{
			j = 0;
			while (all[i + j + length_number] != '\n')
				j++;
			tempo_array = malloc(sizeof(char) * (j + 1));
			all = all + length_number + i;
			tempo_array = ft_strncpy(tempo_array, all, j);
			out[pos] = ft_strncpy(out[pos], tempo_array, j);
		}
		// free(tempo_array);
		break ;
	}
	return (out);
}

char	**dict_to_array(const char *path, int *out_n)
{
	char	*all;
	int		nbytes;
	int		nwords;
	char	**arr;
	int		k;

	all = ft_file_to_string(path, &nbytes);
	// nwords = ft_count_words(all);
	arr = (char **)malloc(sizeof(char *) * 40);
	k = ft_fill_words(arr, all);
	*out_n = k;
	free(all);
	return (arr);
}
