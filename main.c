
#include "push_swap.h"

int main(int argc, char **argv)
{
	if (argc > 1)
	{
		t_stk	*stka;
		t_stk	*stkb;
		int		start;
		int		end;

		stka = NULL;
		stkb = NULL;
		ft_sstk(&stka, &stkb, &argv[1], argc - 1);
		ft_prtstk(stka, stkb);
		start = 0;
		end = 19;
		ft_pullcl(&stka, &stkb, &start, &end);
		ft_prtstk(stka, stkb);
	}
	return (0);
}

