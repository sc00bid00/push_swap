#include "push_swap.h"

int main(int argc, char **argv)
{
	if (argc > 1)
	{
		t_stk	*stka;
		t_stk	*stkb;
		ft_iserr(&argv[1], argc - 1);
		stka = ft_newstk(&argv[1], argc - 1);
		ft_idxstk(&stka,ft_cmp);
		ft_prtlst(stka);
		ft_printf("\n");
		stkb = ft_newstk(NULL, 0);
		ft_prtlst(stkb);
		ft_pa(&stka, &stkb);
		ft_printf("\n");
		ft_prtlst(stkb);
	}
	return (0);
}
