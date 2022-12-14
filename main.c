
#include "push_swap.h"

int main(int argc, char **argv)
{
	if (argc > 1)
	{
		t_stk	*stka;
		t_stk	*stkb;
		int		size;
		int		x;
		int		p;
		int		i;

		stka = NULL;
		stkb = NULL;
		ft_iserr(&argv[1], argc - 1);
		stka = ft_newstk();
		ft_addstk(&stka, &argv[1], argc - 1);
		ft_idxstk(&stka,ft_cmp);
		ft_printf("\nStack a & b\n");
		ft_pstkid(stka);
		size = ft_stksize(stka);
		x = size / 2;
		p = ft_fndnst(stka, x);
		i = 0;
		if (p < x)
		{
			i = 0;
			while (i < p)
			{
				ft_rx(&stka);
				i++;
			}
		}
		else
			
		ft_pstkid(stka);
	}
	return (0);
}
