void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*
#include <stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod);

int main(void)
{
	int a;
	int b;
	int *div;
	int *mod;

	a = 10;
	b = 10;
	ft_div_mod(a, b, &div, &mod);
	printf("%d e %d", *div, *mod);
}
*/