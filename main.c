
#include "push_swap.h"

int main(void)
{
	t_stk	*stka;
	t_stk	*stkb;
	char	*arg;
	char	**argv;
	int		argc;


	arg = "42 56 -90 -27 69 -69 -45 -29 77 12";
	argv = ft_split(arg, ' ');
	argc = ft_cntarr(argv);
	stka = NULL;
	stkb = NULL;
	ft_init(&stka, argv, argc);
	ft_pstkid(stka);
	ft_prtstk(stka, stkb);
	ft_px(&stka, &stkb);
	ft_sort(&stka, &stkb);
	ft_prtstk(stka, stkb);
	return (0);
}

