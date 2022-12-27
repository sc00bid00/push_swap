/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_simple.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsordo <lsordo@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 16:48:42 by lsordo            #+#    #+#             */
/*   Updated: 2022/12/27 16:04:10 by lsordo           ###   ########.fr       */
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
		ra(sta, var);
		i++;
	}
	else
	while (i < var->staz - var->minp)
	{
		rra(sta, 1, var);
		i++;
	}
	pb(stb, sta, var);
}

void	ft_simple3(t_stk **sta, t_var *var)
{
	if (!(*sta)->next->next && (*sta)->six > (*sta)->next->six)
		sa(sta, 1, var);
	else if ((*sta)->next->next)
	{
		if ((*sta)->six == 2 && (*sta)->next->six == 1)
		{
			sa(sta, 1, var);
			rra(sta, 1, var);
		}
		else if ((*sta)->six == 1 && (*sta)->next->six == 0)
			sa(sta, 1, var);
		else if ((*sta)->six == 2 && (*sta)->next->six == 0)
			ra(sta, var);
		else if ((*sta)->six == 1 && (*sta)->next->six == 2)
			rra(sta, 1, var);
		else
		{
			sa(sta, 1, var);
			ra(sta, var);
		}
	}
}

void	ft_simple(t_stk **sta, t_stk **stb, t_var *var)
{
	var->prt = 1;
	if (var->staz < 4)
		ft_simple3(sta, var);
	else
	{
		while (ft_stksize(*sta, NULL) > 2)
			ft_pushmin(sta, stb, var);
		if ((*sta)->six > (*sta)->next->six)
			sa(sta, 1, var);
		while (ft_stksize(*stb, NULL))
			pa(sta, stb, var);
	}
}
