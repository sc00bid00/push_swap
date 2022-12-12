#include "push_swap.h"

int main(int argc, char **argv)
{
	if (argc > 1)
	{
		t_stk	*stka;
		ft_iserr(&argv[1], argc - 1);
		stka = ft_newstk(&argv[1], argc - 1);
		ft_prtlst(stka);
	}
	return (0);
}
