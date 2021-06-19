int	ft_recursive_power(int nb, int power)
{
	int	i;

	if (power < 0)
		return (0);
	if (power == 1)
		return (nb);
	if (power == 0)
		return (1);
	i = (nb * ft_recursive_power(nb, power - 1));
	return (i);
}
