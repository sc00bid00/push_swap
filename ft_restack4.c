/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_restack4.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsordo <lsordo@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 15:47:18 by lsordo            #+#    #+#             */
/*   Updated: 2022/12/27 11:52:51 by lsordo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_restack(t_stk **sta, t_stk **stb, t_var *var)
{
	while (ft_stksize(*stb, NULL))
	{
		var->cllr = 0;
		var->skip = 0;
		ft_getmaxv(*stb, var);
		while ((*stb)->six < var->maxn)
		{
			if (ft_stksize(*stb, NULL) == 1 && (*stb)->six == 0)
				break ;
			if ((*stb)->six == var->maxn2)
				pa(sta, stb);
			if ((*stb)->six == var->maxn3 && (*sta))
			{
				pa(sta, stb);
				ra(sta);
				var->cllr = 1;
			}
			if ((*stb)->six == var->maxn)
				break ;
			if (var->maxp <= ft_stksize(*stb, NULL) / 2)
				rb(stb);
			else
				rrb(stb, 1);
		}
		pa(sta, stb);
		if (((*sta) && (*sta)->next && (*sta)->six > (*sta)->next->six))
			sa(sta, 1);
		if (var->cllr)
			rra(sta, 1);
	}
}
