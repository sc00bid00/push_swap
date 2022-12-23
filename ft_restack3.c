/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_restack3.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsordo <lsordo@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 07:43:03 by lsordo            #+#    #+#             */
/*   Updated: 2022/12/23 12:06:14 by lsordo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_restack(t_stk **sta, t_stk **stb, t_var *var)
{
	while (ft_stksize(*stb, var))
	{
		ft_getmaxv(*stb, var);
		var->cllr = 0;
		while ((*stb)->six < var->maxn)
		{
			if (var->maxp <= ft_stksize(*stb, NULL) / 2)
				rb(stb);
			else
				rrb(stb, 1);
			if ((*stb)->six == var->maxn - 1)
				pa(sta, stb);
			if ((*stb)->six == var->maxn - 2)
			{
				pa(sta, stb);
				ra(sta);
				var->cllr = 1;
			}
		}
		pa(sta, stb);
		if ((*sta)->next && (*sta)->six > (*sta)->next->six && (*stb)->six > (*stb)->next->six)
			sa(sta);
		else
			ss(sta, stb);
		if (var->cllr)
			rra(sta, 1);
	}
}
