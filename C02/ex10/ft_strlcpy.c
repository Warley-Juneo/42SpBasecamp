unsigned int	ft_strlen(char *str)
{
	unsigned int	counter;

	counter = 0;
	while (str[0] != '\0' && str[++counter] != '\0')
		;
	return (counter);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	x;

	x = 0;
	if (size != '\0')
	{
		while (src[x] != '\0' && x < (size - 1))
		{
			dest[x] = src[x];
			x++;
		}
		dest[x] = '\0';
	}
	return (ft_strlen(src));
}

/*
#include <stdio.h>
#include <stdlib.h>

unsigned int    ft_strlcpy(char *dest, char *src, unsigned int size);

int                main(void)
{
    int     src_size;
    char     *src;
    char     *dest;

    src = calloc(11, sizeof(char));
    dest = calloc(8, sizeof(char));
    src = "alo galera";
    src_size = ft_strlcpy(dest, src, 8);
    printf("src: %s\n", src);
    printf("dest: %s\n", dest);
    printf("src_size: %d\n", src_size);
    return(0);
}*/