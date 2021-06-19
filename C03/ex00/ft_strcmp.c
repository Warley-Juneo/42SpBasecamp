int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' || *s2 != '\0')
	{
		if (*s1 != *s2)
			return ((int)(unsigned char)*s1 - (int)(unsigned char)*s2);
		s1++;
		s2++;
	}
	return (0);
}


#include <stdio.h>
#include <bsd/string.h>

int ft_strcmp(char *s1, char *s2);

int main(void)
{
    char a[] = "abcDASDASDa";
    char b[] = "abcaaaDSADASda";
    char c[] = { 'a', -10, 'b' };

    if (
        (srtcmp(a, b) == ft_strcmp(a, b))
        && (strcmp(b, a) == ft_strcmp(b, a))
        && (strcmp(a, a) == ft_strcmp(a, a))
        && (strcmp(b, b) == ft_strcmp(b, b))
        && (strcmp(a, c) == ft_strcmp(a, c))
    )
    {
        printf("OK!");
    }
    else
    {
        printf("KO!");
    }
    return (0);
}
