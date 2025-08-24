/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tool_box.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahabbard <ahabbard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/23 22:09:50 by ahabbard          #+#    #+#             */
/*   Updated: 2025/08/24 07:28:08 by ahabbard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_anyway_i_started_blasting.h"

// PRACTICAL FUNCTION

// will be used to put the length = size of src into the length = 9
// dest (therefore n = 9 or bellow)

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	char			*address_dest;
	unsigned int	index_source;

	address_dest = dest;
	index_source = 0;
	while (src[index_source] && index_source < n)
	{
		*dest = src[index_source];
		index_source++;
		dest++;
	}
	while (index_source < n)
	{
		*dest = '\0';
		dest++;
		index_source++;
	}
	return (address_dest);
}

int	ft_atoi(char *str)
{
	int	value;

	value = 0;
	while (*str > 47 && *str < 58)
	{
		value = value * 10 + *str - '0';
		str++;
	}
	return (value);
}

int	ft_strlen(char *str)
{
	int	length;
	int	index;

	length = 0;
	index = 0;
	while (str[index] != 0)
	{
		index++;
		length++;
	}
	return (length);
}

void	ft_rev_int_tab(char *tab, int size)
{
	char	swp;
	int		index;

	index = 0;
	while (index != size / 2)
	{
		swp = tab[size - index - 1];
		tab[size - index - 1] = tab[index];
		tab[index] = swp;
		index++;
	}
}

// copy the string from a to b :P
char	*ft_copy_span(char *s, int a, int b)
{
	int		len;
	int		i;
	char	*dst;

	if (b < a)
		len = 0;
	else
		len = b - a;
	dst = (char *)malloc((len + 1) * sizeof(char));
	i = 0;
	while (i < len)
	{
		dst[i] = s[a + i];
		i++;
	}
	dst[len] = '\0';
	return (dst);
}