/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   core.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahabbard <ahabbard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/24 07:30:52 by ahabbard          #+#    #+#             */
/*   Updated: 2025/08/24 08:51:37 by ahabbard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "so_anyway_i_started_blasting.h"

void    ft_put_number(int nb, char **array)
{
    if(nb == 0)
        ft_put_strnbr(array[0]);
    if(nb/100 != 0)
       {
            ft_put_strnbr(array[nb/100]);
            ft_put_strnbr(array[28]);
            nb%=100;
       }
    if(nb > 19)
       {
        ft_put_strnbr(array[nb/10 + 18]);
        nb%=10;
       }
    if(nb!=0)
        ft_put_strnbr(array[nb]);
}

void    ft_put_strnbr(char *number)
{
    int length;
        
    length = ft_strlen(number);
    write(1,number, length);
    write(1, " ", 1);        
}

void    ft_put_any_number(int *tab, char **array, int size_tab)
{
    while (size_tab -1 > -1)
    {
        ft_put_number(tab[size_tab -1],array);
        if(size_tab -1 > 0)
            ft_put_strnbr(array[29 + size_tab -2]);
        size_tab--;
        write(1, "-", 1);

    }
}

