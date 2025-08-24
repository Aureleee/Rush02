/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_anyway_i_started_blasting.h                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahabbard <ahabbard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/23 22:10:00 by ahabbard          #+#    #+#             */
/*   Updated: 2025/08/24 23:30:54 by ahabbard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_ANYWAY_I_STARTED_BLASTING_H
# define SO_ANYWAY_I_STARTED_BLASTING_H

char	*ft_strncpy(char *dest, char *src, unsigned int n);
int		ft_atoi(char *str);
int		ft_strlen(char *str);
void	ft_rev_int_tab(char *tab, int size);
void	ft_putnbr(int nbr);
void	ft_putnbr_array(int *arr, int size);
void	ft_putstr(char *str);
int		*ft_ultimate_parsing(char *number, int size_of_number, int *size);
void	ft_parse_integer(char *str, int *array, int *index);
int		ft_size_of_tab(char *str);
char	*ft_create_array_char(unsigned int size);
int		*ft_create_array_int(unsigned int size);
char	**ft_create_array_char_2d(unsigned int size_rows,
			unsigned int size_columns);
int		ft_is_space(char c);
char	*ft_copy_span(char *s, int a, int b);
char	*ft_file_to_string(const char *path);
int		ft_count_words(char *all);
void	ft_fill_words(char **out, char *all);
char	**dict_to_array(const char *path);
void	ft_put_number(int nb, char **array);
void	ft_put_strnbr(char *number);
void	ft_put_any_number(int *tab, char **array, int size_tab);
int		ft_is_int(char *str, int length);
int		ft_check_arg(int argc, char **argv);
#endif
