/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_restack3.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsordo <lsordo@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 07:43:03 by lsordo            #+#    #+#             */
/*   Updated: 2022/12/23 15:35:33 by lsordo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_restack(t_stk **sta, t_stk **stb, t_var *var)
{
	while (ft_stksize(*stb, var))
	{
		ft_getmaxv(*stb, var);
		var->cllr = 0;
		var->cllr2 = 0;
		while ((*stb)->six < var->maxn)
		{
			if (var->maxp <= ft_stksize(*stb, NULL) / 2)
				rb(stb);
			else
				rrb(stb, 1);
			if ((*stb)->six == var->maxn - 1)
			{
				pa(sta, stb);
				if ((*sta)->next && (*sta)->six > (*sta)->next->six)
					sa(sta, 1);
			}
			if ((*stb)->six == var->maxn - 2)
			{
				pa(sta, stb);
				ra(sta);
				var->cllr = 1;
			}
			if ((*stb)->six == var->maxn - 3)
			{
				pa(sta, stb);
				ra(sta);
				var->cllr2 = 1;
			}
		}
		pa(sta, stb);
		if ((*sta)->next && (*sta)->six > (*sta)->next->six && (*sta)->next->six != var->maxn - 2)
			sa(sta, 1);
		if (var->cllr2)
			rra(sta, 1);
		if (var->cllr)
		{
			rra(sta, 1);
			if ((*sta)->six > (*sta)->next->six)
				sa(sta, 1);
		}
	}
}
