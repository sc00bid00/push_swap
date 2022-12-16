
#include "push_swap.h"

int main(void)
{
	t_stk	*stka;
	t_stk	*stkb;
	char	*arg;
	char	**argv;
	int		argc;
	int		x;

	arg = "42 56 -90 -27 69 -69 -45 -29 77 12 100";
	argv = ft_split(arg, ' ');
	argc = ft_cntarr(argv);
	stka = NULL;
	stkb = NULL;
	ft_init(&stka, argv, argc);
	ft_pstkid(stka);
	x = 2;
	ft_printf("%d is in half %d\n", x, ft_midstk(x, stka) + 1);
	return (0);
}

