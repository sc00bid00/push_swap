#include "push_swap.h"

int main(int argc, char **argv)
{
	if (argc > 1)
	{
		t_stk	*stka;
		t_stk	*stkb;

		stka = NULL;
		stkb = NULL;
		ft_iserr(&argv[1], argc - 1);
		stka = ft_newstk();
		ft_addstk(&stka, &argv[1], argc - 1);
		ft_idxstk(&stka,ft_cmp);
		ft_prtstk(stka, stkb);
		ft_printf("\n");
		ft_px(&stka, &stkb);
		ft_px(&stka, &stkb);
		ft_px(&stka, &stkb);
		ft_px(&stka, &stkb);
		ft_prtstk(stka, stkb);
		ft_px(&stkb, &stka);
		ft_px(&stkb, &stka);
		ft_prtstk(stka, stkb);
		ft_sx(&stka);
		ft_sx(&stkb);
		ft_prtstk(stka, stkb);
	}
	return (0);
}
