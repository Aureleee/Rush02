/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_arg.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahabbard <ahabbard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/24 23:15:06 by ahabbard          #+#    #+#             */
/*   Updated: 2025/08/24 23:30:03 by ahabbard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_anyway_i_started_blasting.h"

int	ft_check_arg(int argc, char **argv)
{
	int		valide;
	char	*str;

	str = argv[1];
	valide = 1;
	if (argc != 2)
		valide = 0;
	if (valide)
		valide = ft_is_int(str, ft_strlen(str));
	return (valide);
}
