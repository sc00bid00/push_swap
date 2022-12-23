/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_restack2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsordo <lsordo@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 11:42:46 by lsordo            #+#    #+#             */
/*   Updated: 2022/12/23 07:36:28 by lsordo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_pushmax(t_stk **sta, t_stk **stb, t_var *var)
{
	if ((*sta) && var->maxn )
}

void	ft_pushmax3(t_stk **sta, t_stk **stb, t_var *var)
{
	pa(sta, stb);
	if (var->allow == 0)
	{
		ra(sta);
		var->kllr = var->maxn3;
	}
}

void	ft_pushmax2(t_stk **sta, t_stk **stb, t_var *var)
{
	pa(sta, stb);
	if ((*sta)->next && (*sta)->next->six == var->maxn)
	{
		var->allow = 1;
		if (var->kllr == var->maxn3)
		{
			rra(sta, 1);
			var->kllr = 0;
			var->allow = 0;
		}
	}
}

void	ft_restack(t_stk **sta, t_stk **stb, t_var *var)
{
	while (ft_stksize(*stb, NULL))
	{
		ft_getmaxv(*stb, var);
		var->kllr = 0;
		var->allow = 0;
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
		if ((*stb)->six == var->maxn)
			ft_pushmax(sta, stb, var);
		else if ((*stb)->six == var->maxn2)
			ft_pushmax2(sta, stb, var);
		else
			ft_pushmax3(sta, stb, var);
	}
}
