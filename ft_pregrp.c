/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pregrp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsordo <lsordo@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 16:05:45 by lsordo            #+#    #+#             */
/*   Updated: 2022/12/19 18:30:50 by lsordo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rotate(t_stk **sta, t_var *var)
{
	int	i;

	i = 0;
	while (i < var->cpst)
	{
		if (var->cpst <= var->staz / 2)
		{
			ra(sta);
			i++;
		}
		else
		{
			rra(sta);
			i++;
		}
	}
}

void	ft_fdchpst(t_stk *stk, t_var *var)
{
	int	first;
	int	last;
	int	i;

	first = -1;
	last = 0;
	i = 0;
	while (stk)
	{
		if (stk->six >= var->cl1f && stk->six < var->cl2t && first == -1)
		{
			first = i;
			last = i;
		}
		else if (stk->six >= var->cl1f && stk->six < var->cl2t)
			last = i;
		i++;
		stk = stk->next;
	}
	if (last == -1)
		var->cpst = first;
	else if (first <= var->staz - last)
		var->cpst = first;
	else
		var->cpst = last;
}

void	ft_rtnpush(t_stk **sta, t_stk **stb, t_var *var)
{
	ft_stksize(*sta, var);
	ft_fdchpst(*sta, var);
	ft_rotate(sta, var);
	if ((*sta)->six >= var->cl1f && (*sta)->six < var->cl1t)
		pa(sta, stb);
	else
	{
		pa(sta, stb);
		rb(stb);
	}
}

int	ft_clnstk(t_stk *stk, int from, int to)
{
	while (stk)
	{
		if (stk->six >= from && stk->six < to)
			return (1);
		stk = stk->next;
	}
	return (0);
}

void	ft_pregrp(t_stk **sta, t_stk **stb, t_var *var)
{
	int	i;

	i = 0;
	while (i < var->clnb - 1)
	{
		var->cl1f = i * var->clsz;
		var->cl1t = var->cl1f + var->clsz;
		var->cl2t = var->cl1t + var->clsz;
		// ft_printf("stack size %d\nclusters number %d\ncluster size %d\ncluster param %d\n", var->staz, var->clnb, var->clsz, var->clpr);
		// ft_printf("cl1f %d\ncl1t %d\ncl2t %d\n", var->cl1f, var->cl1t, var->cl2t);
		if (ft_clnstk(*sta, var->cl1f, var->cl2t))
			ft_rtnpush(sta, stb, var);
		i++;
	}
}
