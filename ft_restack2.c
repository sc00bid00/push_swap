/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_restack2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsordo <lsordo@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 11:42:46 by lsordo            #+#    #+#             */
/*   Updated: 2022/12/22 19:06:32 by lsordo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_pushhead(t_stk **sta, t_stk **stb, t_var *var)
{
	if (!(*sta))
		pa(sta, stb);
	if ((*stb)->six == (*sta)->six + 3)
	{
		var->kllr = (*stb)->six;
		pa(sta, stb);
		ra(sta);
	}
	if ((*stb)->six < (*sta)->six + 3)
		pa(sta, stb);
	if ((*sta)->next && (*sta)->six > (*sta)->next->six)
		sa(sta);
	if ((*sta)->six == var->kllr + 1)
	{
		rra(sta, 1);
		var->kllr = 0;
	}
}

void	ft_restack(t_stk **sta, t_stk **stb, t_var *var)
{
	while (ft_stksize(*stb, NULL))
	{
		ft_getmaxv(*stb, var);
		var->kllr = 0;
		if (var->maxp <= ft_stksize(*stb, NULL) / 2)
		{
			while ((*stb)->six < var->maxn && (*stb)->six < var->maxn2
				&& (*stb)->six < var->maxn3)
				rb(stb);
		}
		else
		{
			while ((*stb)->six < var->maxn && (*stb)->six < var->maxn2
				&& (*stb)->six < var->maxn3)
				rrb(stb, 1);
		}
		ft_pushhead(sta, stb, var);
	}
}
