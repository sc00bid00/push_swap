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
		ft_printf("\nStack a & b\n");
		ft_prtstk(stka, stkb);
		ft_px(&stka, &stkb);
		ft_px(&stka, &stkb);
		ft_px(&stka, &stkb);
		ft_px(&stka, &stkb);
		ft_printf("\n4x pa\n");
		ft_prtstk(stka, stkb);
		ft_px(&stkb, &stka);
		ft_px(&stkb, &stka);
		ft_printf("\n2x pb\n");
		ft_prtstk(stka, stkb);
		ft_sx(&stka);
		ft_sx(&stkb);
		ft_printf("\nss (sa sb)\n");
		ft_prtstk(stka, stkb);
		ft_rx(&stka);
		ft_printf("\nra\n");
		ft_prtstk(stka, stkb);
	}
	return (0);
}
