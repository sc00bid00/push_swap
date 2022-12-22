/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsordo <lsordo@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 17:02:35 by lsordo            #+#    #+#             */
/*   Updated: 2022/12/22 11:24:06 by lsordo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stk	*sta;
	t_stk	*stb;
	t_var	*var;

	if (argc > 1)
	{
		sta = NULL;
		stb = NULL;
		var = malloc(sizeof(t_var));
		var->cph = 0;
		var->cpt = 0;
		var->cpt2 = 0;
		var->cph2 = 0;
		ft_init(argc, argv, &sta);
		ft_index(&sta, var);
		ft_idntt(&sta, var);
		if (var->staz < 6)
			ft_simple(&sta, &stb, var);
		else
		{
			ft_defclt(var);
			ft_pregrp(&sta, &stb, var);
			ft_restack(&sta, &stb, var);
		}
		// ft_printf("cph %d cph2 %d cpt %d cpt2 %d", var->cph, var->cph2, var->cpt, var->cpt2);
		ft_freearg(&sta);
		free(var);
	}
	return (0);
}
