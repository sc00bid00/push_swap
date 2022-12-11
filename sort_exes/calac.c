#include <stdio.h>
#include <stdlib.h>


int	ft_sumup(int n)
{
	int	sum;

	sum = 0;
	while (n > 0)
	{
		sum += n;
		n--;
	}
	return (sum);
}

int main(int argc, char **argv)
{
	int		i;
	int		j;
	int		max;
	int		cstr;
	int		lim;


	if (argc == 4)
	{
		max = atoi(argv[1]);
		cstr = atoi(argv[2]);
		lim = atoi(argv[3]);
		i = cstr;
		while (i <= max)
		{
			j = 2;
			while (ft_sumup(i / j) > lim)
				j++;
			printf("%d, %d, %d\n", i, j, ft_sumup(i / j));
			i += cstr;
		}
	}
	return (0);
}
