/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsordo <lsordo@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 13:02:40 by lsordo            #+#    #+#             */
/*   Updated: 2022/12/29 13:04:11 by lsordo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>
#include <get_next_line.h>

int	main(int argc, char **argv)
{
	t_stk	*sta;
	t_stk	*stb;
	t_var	*var;

	if (argc > 1)
	{
		sta = NULL;
		stb = NULL;
		ft_initchecker(argc, argv, &sta);
		var = malloc(sizeof(t_var));
		var->prt = 0;
		if (ft_stksize(sta, NULL) > 1)
			ft_index(&sta, var);
		var->argc = argc;
		var->argv = argv;
		ft_getcmds(&sta, &stb, var);
		ft_freearg(&sta);
		free(var);
	}
	return (0);
}
