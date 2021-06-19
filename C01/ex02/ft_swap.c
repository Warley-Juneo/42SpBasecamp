void	ft_swap(int *a, int *b)
{
	int	aux;

	aux = *a;
	*a = *b;
	*b = aux;
}

/*
#include <stdio.h>
int    main(void)
{
    int a;
    int b;

    a = 10;
    b = 20;

    ft_swap(&a, &b);
    printf("a %d b: %d", a, b);
    return (0);
}
*/
