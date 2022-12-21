/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_restack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsordo <lsordo@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 18:10:28 by lsordo            #+#    #+#             */
/*   Updated: 2022/12/21 09:06:55 by lsordo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_mvtail(t_stk **sta, t_stk **stb, t_var *var)
{
	int	i;
	int	n;

	var->stbz = ft_stksize(*stb, NULL);
	n = var->stbz - var->maxp;
	i = 0;
	while (i < n)
	{
		rrb(stb, 1);
		i++;
	}
	pa(stb, sta);
	while (i-- >= 1)
		rb(stb);
}

void	ft_mvhead(t_stk **sta, t_stk **stb, t_var *var)
{
	int	i;

	i = 0;
	while (i < var->maxp)
	{
		rb(stb);
		i++;
	}
	pa(stb, sta);
	while (i-- >= 1)
		rrb(stb, 1);
}

void	ft_restack(t_stk **sta, t_stk **stb, t_var *var)
{
	while (ft_stksize(*stb, NULL))
	{
		t_stk	*tmp;
		int	i;

		tmp = *stb;
		i = 0;
		var->maxp = i;
		var->maxn = tmp->six;
		while (tmp->next)
		{
			tmp = tmp->next;
			i++;
			if (tmp->six > var->maxn)
			{
				var->maxp = i;
				var->maxn = tmp->six;
			}
		}
		if (i <= ft_stksize(*stb, NULL)/2)
			ft_mvhead(sta, stb, var);
		else
			ft_mvtail(sta, stb, var);
	}
}
