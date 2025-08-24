// This files gather helpful function



#include <unistd.h>
#include <stdio.h> 
#include <stdlib.h>
#include "so_anyway_i_started_blasting.h"


int    *ft_ultimate_parsing(char *number, int size_of_number)
{
    int index;

    int size; // Size of the INT 
    int *utimate_arr; //array tht will stack the int 
    size = ft_size_of_tab(number); // THIs set up the size of ULTIMATE array (see with me for understanding it)
    utimate_arr = ft_create_array_int(size); // create is 




    char *tempo_array; // this array is used to copy (using strncpy with n = 9) the first, 
    //then second,,, 9char of the original number (number) then after using   
    tempo_array = ft_create_array_char(9);

    index = 0; //index wille travel along number (it will be our stop condition)
    while (size_of_number > 0)
    {
        
        if (size_of_number > 9)
        {   
            write(1, "le char en input est : ",23);
            ft_putstr(number);



            ft_rev_int_tab(number, size_of_number);
            write(1, "le char reversed en input est : ",32);
            ft_putstr(number);

        
            write(1, "la copy est : ",14);

            tempo_array= ft_strncpy(tempo_array,number,9);
            ft_putstr(tempo_array);

            
            write(1, "la copy reversed est : ",23);
            ft_rev_int_tab(tempo_array, 9);
            ft_putstr(tempo_array);


            ft_parse_integer(tempo_array, utimate_arr,&index);//transform the char of size = 9  into a int
            // and then embed the int in the ultimate array
            // ---- THIS FUNCTION INCREMENT INDEX ---- (or at least is supposed to.. XD) 
            //ft_putnbr_array(utimate_arr, size); //shows whats inside of utimate
            write(1, "content of the ultimate array :\n",32);
            ft_putnbr_array(utimate_arr,size);



            //ft_rev_int_tab(number, size_of_number);

            number+=9;
            size_of_number-=9;
            ft_rev_int_tab(number, size_of_number);

            write(1, "le char en output est : ",24); // ATTENTION  J'AVANCE LE POINTEUR
            ft_putstr(number);

            printf("l'index de ultime est a : %d\n",index);
        }
        else 
        {
             write(1, "le final char en input est : ",29);
            ft_putstr(number);


            ft_parse_integer(number, utimate_arr,&index);//transform the char of size = 9  into a int
            // and then embed the int in the ultimate array
            // ---- THIS FUNCTION INCREMENT INDEX ---- (or at least is supposed to.. XD) 
            //ft_putnbr_array(utimate_arr, size); //shows whats inside of utimate
            write(1, "content of the ultimate array :\n",32);
            ft_putnbr_array(utimate_arr,size);



            //ft_rev_int_tab(number, size_of_number);

            number+=size_of_number; // useless but set the poineur to the edd
            size_of_number=0;  //we are finished  !!! :)
            write(1, "le char en output est : ",24); // ATTENTION  J'AVANCE LE POINTEUR
            ft_putstr(number);
            write(1, "\n ... bas vide ducoup haha\n\n",28);
            printf("l'index de ultime est a : %d\n",index);
        }
    }
    
    free(tempo_array);

    printf("\n\n\n----------THE END----------\n\n\n");

    return (utimate_arr);
}










// This function parsed the integer nbr into the array
void	ft_parse_integer(char *str, int *array, int *index)
{
    int nbr;


    nbr = ft_atoi(str);
	while (nbr >= 1000)
	{
		array[*index] = nbr % 1000;
		nbr = nbr / 1000;
        (*index)++;
	}
    array[*index] = nbr % 1000;
    (*index)++;
}


int    ft_size_of_tab(char *str)
{
    int size;

    size =ft_strlen(str);
    printf("size de l'int est : %d \n",size);

    if(size%3 == 0)
        size = size/3;
    else
         size = size/3 + 1;
    
    printf("size du tab est : %d \n",size);

    return (size);
}




