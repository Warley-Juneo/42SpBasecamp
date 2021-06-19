void	ft_sort_int_tab(int *tab, int size)
{
	int	step;
	int	left_temp;

	if (size <= 0)
		return ;
	step = 0;
	while (size * size)
	{
		while (step < size - 1)
		{
			if (tab[step] > tab[step + 1])
			{
				left_temp = tab[step];
				tab[step] = tab[step + 1];
				tab[step + 1] = left_temp;
			}
			step++;
		}
		step = 0;
		size--;
	}
}

/*
int    main(void)
{
    int size = 4;

    int arr[4] = {7, 12, 32, 1};
      int *ptr = arr;

    ft_sort_int_tab(ptr, size);
}
*/