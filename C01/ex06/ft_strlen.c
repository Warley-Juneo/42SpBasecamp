#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*(str + i) != '\0')
		i++;
	return (i);
}

/*
#include <stdio.h>
int    main(void)
{
    printf("%d", ft_strlen("Hello"));
    printf("\n");
    printf("%d", ft_strlen("RUSH!!!"));
    printf("\n");
    return (0);
}
*/