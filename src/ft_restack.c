/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_restack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsordo <lsordo@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 15:47:18 by lsordo            #+#    #+#             */
/*   Updated: 2022/12/29 08:36:36 by lsordo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

void	ft_routemax(t_stk **sta, t_stk **stb, t_var *var)
{
	while ((*stb)->six < var->maxn)
	{
		if (ft_stksize(*stb, NULL) == 1 && (*stb)->six == 0)
			break ;
		if ((*stb)->six == var->maxn2)
			pa(sta, stb, var);
		if ((*stb)->six == var->maxn3 && (*sta))
		{
			pa(sta, stb, var);
			ra(sta, var);
			var->cllr = 1;
		}
		if ((*stb)->six == var->maxn)
			break ;
		if (var->maxp <= ft_stksize(*stb, NULL) / 2)
			rb(stb, var);
		else
			rrb(stb, 1, var);
	}
}

void	ft_restack(t_stk **sta, t_stk **stb, t_var *var)
{
	while (ft_stksize(*stb, NULL))
	{
		var->cllr = 0;
		ft_getmaxv(*stb, var);
		ft_routemax(sta, stb, var);
		pa(sta, stb, var);
		if (((*sta) && (*sta)->next && (*sta)->six > (*sta)->next->six))
			sa(sta, 1, var);
		if (var->cllr)
			rra(sta, 1, var);
	}
}
