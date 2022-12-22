/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_simple.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsordo <lsordo@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 16:48:42 by lsordo            #+#    #+#             */
/*   Updated: 2022/12/22 10:00:20 by lsordo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_minp(t_stk *sta, t_var *var)
{
	int		i;
	t_stk	*tmp;

	tmp = sta;
	var->staz = ft_stksize(tmp, NULL);
	i = 0;
	var->min = tmp->six;
	var->minp = i;
	while (tmp->next)
	{
		tmp = tmp->next;
		i++;
		if (tmp->six < var->min)
		{
			var->minp = i;
			var->min = tmp->six;
		}
	}
}

void	ft_pushmin(t_stk **sta, t_stk **stb, t_var *var)
{
	int	i;

	ft_minp(*sta, var);
	i = 0;
	if (var->minp <= var->staz / 2)
	while (i < var->minp)
	{
		ra(sta);
		i++;
	}
	else
	while (i < var->staz - var->minp)
	{
		rra(sta, 1);
		i++;
	}
	pb(stb, sta);
}

void	ft_simple3(t_stk **sta)
{
	if (!(*sta)->next->next && (*sta)->six > (*sta)->next->six)
		sa(sta);
	else if ((*sta)->next->next)
	{
		if ((*sta)->six == 2 && (*sta)->next->six == 1)
		{
			sa(sta);
			rra(sta, 1);
		}
		else if ((*sta)->six == 1 && (*sta)->next->six == 0)
			sa(sta);
		else if ((*sta)->six == 2 && (*sta)->next->six == 0)
			ra(sta);
		else if ((*sta)->six == 1 && (*sta)->next->six == 2)
			rra(sta, 1);
		else
		{
			sa(sta);
			ra(sta);
		}
	}
}

void	ft_simple(t_stk **sta, t_stk **stb, t_var *var)
{
	if (var->staz < 4)
		ft_simple3(sta);
	else
	{
		while (ft_stksize(*sta, NULL) > 2)
			ft_pushmin(sta, stb, var);
		if ((*sta)->six > (*sta)->next->six)
			sa(sta);
		while (ft_stksize(*stb, NULL))
			pa(sta, stb);
	}
}
