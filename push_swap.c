/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsordo <lsordo@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 17:02:35 by lsordo            #+#    #+#             */
/*   Updated: 2022/12/20 14:24:15 by lsordo           ###   ########.fr       */
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
		ft_init(argc, argv, &sta);
		ft_index(&sta, var);
		ft_idntt(&sta, var);
		ft_defclt(var);
		// ft_prtstk(sta, stb);
		ft_pregrp(&sta, &stb, var);
		// ft_prtstk(sta, stb);
		ft_printf("Stack %d\nClusters %d\nCl.size %d\n", var->staz, var->clnb, var->clsz);
		ft_freearg(&sta);
		free(var);
	}
	return (0);
}
