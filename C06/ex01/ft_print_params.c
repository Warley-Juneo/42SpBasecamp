#include <unistd.h>
void	print_name(int argc, char **argv)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	while (i++ < argc - 1)
	{
		j = 0;
		while (argv[i][j])
		{
			write(1, &argv[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
	}	
}

int	main(int argc, char **argv)
{
	print_name(argc, argv);
	return (0);
}
