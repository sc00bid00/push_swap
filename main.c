
#include "push_swap.h"

int main(int argc, char **argv)
{
	if (argc > 1)
	{
		t_stk	*stka;
		t_stk	*stkb;

		stka = NULL;
		stkb = NULL;
		ft_sstk(&stka, &stkb, &argv[1], argc - 1);
		ft_prtstk(stka, stkb);
	}
	return (0);
}

