/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_box_2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahabbard <ahabbard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/24 23:18:51 by ahabbard          #+#    #+#             */
/*   Updated: 2025/08/24 23:30:15 by ahabbard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_int(char *str, int length)
{
	int	index;
	int	valide;

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
