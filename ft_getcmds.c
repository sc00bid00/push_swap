/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getcmds.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsordo <lsordo@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 13:08:41 by lsordo            #+#    #+#             */
/*   Updated: 2022/12/28 13:45:42 by lsordo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "get_next_line.h"

void	ft_getcmds(t_stk **sta, t_stk **stb, t_var *var)
{
	char	*line;

	while (var->cmd)
	{
		var->cmd = get_next_line(0);
		if (!var->cmd)
			ft_act(sta, stb, var);
	}
	if (ft_stksize(*stb, NULL) != 0 && !ft_sorted(*sta))
		ft_checkfail(sta, stb, var);
	else
		ft_printf("OK");
}
