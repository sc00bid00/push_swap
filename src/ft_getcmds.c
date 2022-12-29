/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getcmds.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsordo <lsordo@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 13:08:41 by lsordo            #+#    #+#             */
/*   Updated: 2022/12/29 13:47:57 by lsordo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>
#include <get_next_line.h>

void	ft_getcmds(t_stk **sta, t_stk **stb, t_var *var)
{
	while (1)
	{
		var->cmd = get_next_line(0);
		if (var->cmd)
		{
			ft_act(sta, stb, var);
			free(var->cmd);
		}
		else
			break ;
	}
	if (ft_stksize(*stb, NULL) == 0 && ft_sorted(*sta))
		ft_printf("OK\n");
	else
		ft_checkfail(sta, stb, var, "KO\n");
}
