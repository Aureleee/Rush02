


#include <unistd.h>
#include <stdio.h> 


// usefull function to print nbr or array 



void	ft_putnbr(int nbr)
{
	char	c;

	if (nbr >= 10)
		ft_putnbr(nbr / 10);
	c = nbr % 10 + '0';
	write(1, &c, 1);
}


void	ft_putnbr_array(int *arr, int size)
{
	int index = 0;

	while (index < size)
    {
        printf("%d --> \n", index);
        ft_putnbr(arr[index]);
        write(1, "\n", 1);
        index++;
    }
}
