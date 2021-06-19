#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	number_1;
	int	number_2;

	number_1 = 0;
	number_2 = 1;
	while (number_1 <= 98)
	{
		while (number_2 <= 99)
		{
			ft_putchar('0' + (number_1 / 10));
			ft_putchar('0' + (number_1 % 10));
			ft_putchar(' ');
			ft_putchar('0' + (number_2 / 10));
			ft_putchar('0' + (number_2 % 10));
			if (number_1 == 98 && number_2 == 99)
				break ;
			ft_putchar(',');
			ft_putchar(' ');
			number_2++;
		}
		number_2 = number_1 + 2;
		number_1++;
	}
}
