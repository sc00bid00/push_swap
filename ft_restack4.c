/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_restack4.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsordo <lsordo@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 15:47:18 by lsordo            #+#    #+#             */
/*   Updated: 2022/12/26 21:33:16 by lsordo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_restack(t_stk **sta, t_stk **stb, t_var *var)
{
	while (ft_stksize(*stb, NULL))
	{
		var->cllr = 0;
		var->stbz = ft_stksize(*stb, NULL);
		ft_getmaxv(*stb, var);
		while ((*stb)->six < var->maxn && (*stb)->six > 0)
		{
			if	(var->maxp <= var->stbz / 2)
				rb(stb);
			else
				rrb(stb, 1);
			if ((*stb)->six == var->maxn2)
				pa(sta, stb);
		}
		if ((*sta) && (*sta)->next && (*sta)->six > (*sta)->next->six)
			sa(sta, 1);
		pa(sta, stb);
		if ((*sta) && (*sta)->next && (*sta)->six > (*sta)->next->six)
			sa(sta, 1);
	}

}
