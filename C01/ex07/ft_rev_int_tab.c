#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	aux1;
	int	counter;

	if (size == 0)
		return ;
	counter = 0;
	size = size - 1;
	while (counter < size)
	{
		aux1 = tab[counter];
		tab[counter] = tab[size];
		tab[size] = aux1;
		size--;
		counter++;
	}
}

/*
int    main(void)
{
    int size = 9;

    int arr[9] = {-1, -2, -3, -24, -65, 76, 7, 8, 9};
      int *ptr = arr;
    ft_rev_int_tab(ptr, size);
    return (0);
}
*/