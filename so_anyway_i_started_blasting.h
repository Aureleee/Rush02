#ifndef POTATO
#define POTATO

char	*ft_strncpy(char *dest, char *src, unsigned int n);
int	ft_atoi(char *str);
int    ft_strlen(char *str);
void	ft_rev_int_tab(char *tab, int size);
void	ft_putnbr(int nbr);
void	ft_putnbr_array(int *arr, int size);
void	ft_putstr(char *str);
int    *ft_ultimate_parsing(char *number, int size_of_number);
void	ft_parse_integer(char *str, int *array, int *index);
int    ft_size_of_tab(char *str);
char *ft_create_array_char(unsigned int size);
int *ft_create_array_int(unsigned int size);
#endif