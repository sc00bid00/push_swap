/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsordo <lsordo@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 17:02:35 by lsordo            #+#    #+#             */
/*   Updated: 2022/12/19 16:52:32 by lsordo           ###   ########.fr       */
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
		ft_idntty(&sta, var);
		ft_prtstk(sta, stb);
		ft_defclt(var);
		ft_pregrp(&sta, &stb, var);
		ft_prtstk(sta, stb);
		ft_freearg(&sta);
		free(var);
	}
	return (0);
}
