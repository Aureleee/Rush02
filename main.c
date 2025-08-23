#include <stdio.h> 

#include "so_anyway_i_started_blasting.h"


int main(int argc, char **argv)
{

    int *arr;
    int size;
    int *ARRAY_OF_INFINITY;
    char number[] = "5678100200300400500600700800900"; 

    size = ft_strlen(number);
    ARRAY_OF_INFINITY = ft_ultimate_parsing(number,size);


    //bellow this is meant to display the ARRAY_OF_INFINITY. you can delete it 
    char cpy_number[] = "5678100200300400500600700800900"; 
    printf("l'enter en input est : %s\n",cpy_number );
    int size_tab;
    size_tab = ft_size_of_tab(cpy_number);
    ft_putnbr_array(ARRAY_OF_INFINITY,size_tab);

    return (0);
}