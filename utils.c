// This files gather helpful function



#include <unistd.h>
#include <stdio.h> 
#include <stdlib.h>

int    ft_strlen(char *str);
char	*ft_strncpy(char *dest, char *src, unsigned int n);
void	ft_parse_integer(char *str, int *array, int *index);
int	ft_atoi(char *str);

char *ft_create_array_char(unsigned int size)
{
    char *arr;
    arr = (char *)malloc((size)*sizeof(char));
    if (arr == NULL)
        return (0);
    return (arr);
}
int *ft_create_array_int(unsigned int size)
{
    int *arr;
    arr = (int *)malloc((size)*sizeof(int));
    if (arr == NULL)
        return (0);
    return (arr);
}



void    ft_parse_long_integer(char *str, int *array, int size)
{   
    int index;
    char *cpy_str;

    index = 0;
    while (index < size)
        {
            cpy_str=ft_create_array_char(11); 
            cpy_str = ft_strncpy(cpy_str,str,10);   // create a buffer of size 10, copy the slice
            ft_parse_integer(cpy_str,array,&index); // of str and parse it into array
        }


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



// PRACTICAL FUNCTION
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

int    ft_strlen(char *str)
{
    int length;

    length = 0;
    while(*str)
    {
        str++;
        length++;
    }
return (length);
}





char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;
	char			*address_dest;

	address_dest = dest;
	i = 0;
	while (*src && i < n)
	{
		*dest = *src;
		src++;
		i++;
		dest++;
	}
	while (i < n)
	{
		*dest = '\0';
		dest++;
		i++;
	}
	return (address_dest);
}




