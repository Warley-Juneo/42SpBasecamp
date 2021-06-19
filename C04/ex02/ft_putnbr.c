#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	check_zero(int nb)
{
	if (nb == 0)
	{
		ft_putchar('0');
		return ;
	}
}

void	max_min_negative (void)
{
	write(1, "-2147483648", 11);
	return ;
}

void	ft_putnbr(int nb)
{
	int		divider;
	int		not_zero_first;
	char	digit;

	divider = 1000000000;
	not_zero_first = 0;
	check_zero(nb);
	if (nb == -2147483648)
		max_min_negative();
	if (nb < 0 && nb != -2147483648)
	{
		nb *= -1;
		ft_putchar('-');
	}
	while (divider && nb != -2147483648)
	{
		digit = '0' + nb / divider;
		if (digit != '0')
			not_zero_first = 1;
		if (not_zero_first != 0)
			ft_putchar(digit);
		nb = nb % divider;
		divider = divider / 10;
	}
}
