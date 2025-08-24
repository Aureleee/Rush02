/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_dict.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahabbard <ahabbard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/23 22:29:07 by ahabbard          #+#    #+#             */
/*   Updated: 2025/08/24 23:01:05 by ahabbard         ###   ########.fr       */
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
char	*ft_file_to_string(const char *path)
{
	int		fd;
	int		n;
	char	*all;

	all = (char *)malloc(700);
	fd = open(path, O_RDONLY);
	n = read(fd, all, 700);
	close(fd);
	all[n] = '\0';
	return (all);
}

int	ft_count_words(char *all)
{
	int	i;
	int	cnt;

	i = 0;
	cnt = 0;
	while (all[i])
	{
		if (all[i] == ':')
			cnt++;
		i++;
	}
	return (cnt);
}

void	ft_fill_words(char **out, char *all)
{
	int	i;
	int	k;
	int	start;
	int	end;

	i = 0;
	k = 0;
	while (all[i])
	{
		if (all[i] == ':')
		{
			i++;
			while (ft_is_space(all[i]))
				i++;
			start = i;
			while (all[i] && all[i] != '\n')
				i++;
			end = i;
			out[k++] = ft_copy_span(all, start, end);
		}
		if (all[i])
			i++;
	}
}

char	**dict_to_array(const char *path)
{
	char	*all;
	int		nwords;
	char	**arr;
	int		k;

	all = ft_file_to_string(path);
	nwords = ft_count_words(all);
	arr = (char **)malloc(sizeof(char *) * nwords);
	ft_fill_words(arr, all);
	free(all);
	return (arr);
}
