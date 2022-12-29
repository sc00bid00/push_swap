#include <push_swap.h>

static int	ft_errsing(int i, char **arr)
{
	char	*s;
	int		j;

	s = arr[i];
	j = 0;
	while (s[j])
	{
		if ((!ft_isdigit(s[j]) && s[j] != '+' && s[j] != '-')
			|| (ft_atoi(s) == 0 && s[0] != '0')
			|| (ft_atoi(s) < 0 && s[0] != '-')
			|| (ft_atoi(s) > 0 && s[0] == '-'))
		{
			ft_printf("Error\n");
			return (1) ;
		}
		j++;
	}
	return (0);
}

int	ft_singleinchecker(int argc, char **arr)
{
	int	i;

	i = 0;
	while (arr[i])
		i++;
	if (i == 1 && argc == 2 && ft_errsing(i - 1, arr))
	{
		ft_freear(arr);
		exit(0);
	}
	if (i == 1 && argc == 2)
		return (1);
	return (0);
}
