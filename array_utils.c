

#include "so_anyway_i_started_blasting.h"
#include <stdlib.h>


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
