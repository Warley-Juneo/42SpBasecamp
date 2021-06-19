#include <unistd.h>
void	print_name(char **argv)
{
	int	j;

	j = 0;
	while (argv[0][j])
	{
		write(1, &argv[0][j], 1);
		j++;
	}
	write(1, "\n", 1);
}

int	main(int argc, char **argv)
{
	print_name(argv);
	return (argc);
}
