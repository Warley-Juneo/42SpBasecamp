int	ft_str_is_alpha(char *str)
{
	int	alpha;
	int	i;

	alpha = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'a' || str[i] > 'z')
		{
			if (str[i] < 'A' || str[i] > 'Z')
			{
				alpha = 0;
			}
		}
		i++;
	}
	return (alpha);
}
