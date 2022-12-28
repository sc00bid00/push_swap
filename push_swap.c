/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsordo <lsordo@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 17:02:35 by lsordo            #+#    #+#             */
/*   Updated: 2022/12/28 12:20:20 by lsordo           ###   ########.fr       */
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
		ft_init(argc, argv, &sta);
		var = malloc(sizeof(t_var));
		var->prt = 0;
		ft_index(&sta, var);
		ft_idntt(&sta, var);
		var->argc = argc;
		var->argv = argv;
		if (var->staz < 6)
			ft_simple(&sta, &stb, var);
		else
			ft_complex(&sta, &stb, var);
		ft_freearg(&sta);
		free(var);
	}
	return (0);
}
