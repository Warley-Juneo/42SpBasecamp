int	ft_str_is_uppercase(char *str)
{
	int	x;
	int	letter;
	int	only_upper;

	x = 0;
	only_upper = 0;
	while (str[x] != '\0')
	{
		letter = str[x];
		if (letter >= 65 && letter <= 90)
		{
			only_upper = 1;
		}
		else
		{
			only_upper = 0;
			return (0);
		}
		x++;
	}
	return (1);
}
