#include <stdio.h> 



//find the size of the array
int    ft_size_of_tab(char *str);

//create the array 
int *ft_create_array_int(unsigned int size);

//parse the integer nbr into the array
void    ft_parse_long_integer(char *str, int *array, int size);
// void	ft_putnbr(int nbr);
void	ft_putnbr_array(int *arr, int size);

//usefull function
int    ft_strlen(char *str);
int	ft_atoi(char *str);

int main(int argc, char **argv)
{

      //              Use this to test the ft_parse_integer function :D
    // int tab[3];
    // ft_parse_integer(12093402, tab);
    // ft_putnbr_array(tab, 3);

    int *arr;
    int size;

    size = ft_size_of_tab(argv[1]);
        
    arr = ft_create_array_int(size);

    ft_parse_long_integer(argv[1], arr,size);

   // ft_putnbr_array(arr, size);
    return (0);
}