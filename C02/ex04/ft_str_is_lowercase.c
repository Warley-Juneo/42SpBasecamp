int	ft_str_is_lowercase(char *str)
{
	int	x;
	int	letter;
	int	only_chars;

	x = 0;
	only_chars = 0;
	while (str[x] != '\0')
	{
		letter = str[x];
		if (letter >= 97 && letter <= 122)
		{
			only_chars = 1;
		}
		else
		{
			only_chars = 0;
			return (0);
		}
		x++;
	}
	return (1);
}

/*
#include <stdio.h>
int        ft_str_is_lowercase(char *str);

int    main(void)
{
    printf("%d", ft_str_is_lowercase("aAaa"));
    return (0);
}
*/