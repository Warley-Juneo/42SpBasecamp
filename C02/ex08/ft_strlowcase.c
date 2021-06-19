char	*ft_strlowcase(char *str)
{
	int	x;
	int	letter;

	x = 0;
	while (str[x] != '\0')
	{
		letter = str[x];
		if ((letter >= 65 && letter <= 90))
		{
			str[x] = letter + 32;
		}
		x++;
	}
	return (str);
}
