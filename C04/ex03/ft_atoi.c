int	ft_atoi(char *str)
{
	int	i;
	int	signal;
	int	n;

	i = 0;
	signal = 1;
	n = 0;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t' || str[i] == '\f'
		|| str[i] == '\r' || str[i] == '\v')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			signal *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		n = (str[i] - '0') + (n * 10);
		i++;
	}
	n *= signal;
	return (n);
}

/*
int    ft_atoi_correct(char *str)
{
    int                i;
    int                sign;
    unsigned int    total;

    i = 0;
    sign = 1;
    total = 0;
    while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
        i++;
    while (str[i] == '+' || str[i] == '-')
    {
        if (str[i] == '-')
            sign *= (-1);
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9')
    {
        total *= 10;
        total += str[i] - '0';
        i++;
    }
    return (total * sign);
}


#include <stdio.h>
#include <stdlib.h>
int        main(void)
{
    // quando o comportamento e igual ao de atoi
    printf("Mine: %d\n", ft_atoi("12345/1234"));
    printf("Atoi: %d\n", atoi("12345/1234"));
    printf("Atoi Correct: %d\n", ft_atoi_correct("12345/1234"));
    printf("------\n");

    printf("------\n");
    printf("Mine: %d\n", ft_atoi("--xxxx xxx 124x5"));
    printf("Atoi: %d\n", atoi("--xxxx xxx 124x5"));
    printf("Atoi Correct: %d\n", ft_atoi_correct("--xxxx xxx 124x5"));
    printf("------\n");

    printf("------\n");
    printf("Mine: %d\n", ft_atoi(" --12x34ab567"));
    printf("Atoi: %d\n", atoi(" --12x34ab567"));
    printf("Atoi Correct: %d\n", ft_atoi_correct(" --12x34ab567"));
    printf("------\n");

    printf("------\n");
    printf("Mine: %d\n", ft_atoi("1234"));
    printf("Atoi: %d\n", atoi("1234"));
    printf("Atoi Correct: %d\n", ft_atoi_correct("1234"));
    printf("------\n");

    printf("------\n");
    printf("Mine: %d\n", ft_atoi("-1325632167"));
    printf("Atoi: %d\n", atoi("-1325632167"));
    printf("Atoi Correct: %d\n", ft_atoi_correct("-1325632167"));
    printf("------\n");

    printf("------\n");
    printf("Mine: %d\n", ft_atoi("--1325632167"));
    printf("Atoi: %d\n", atoi("--1325632167"));
    printf("Atoi correct: %d\n", ft_atoi_correct("--1325632167"));
    printf("------\n");

    printf("------\n");
    printf("Mine: %d\n", ft_atoi("1325632167"));
    printf("Atoi: %d\n", atoi("1325632167"));
    printf("Atoi Correct: %d\n", ft_atoi_correct("1325632167"));
    printf("------\n");
}*/