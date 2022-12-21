/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_simple.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsordo <lsordo@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 16:48:42 by lsordo            #+#    #+#             */
/*   Updated: 2022/12/21 19:18:52 by lsordo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_posmin(t_stk	*sta)
{
	int		i;
	int		minp;
	int		minn;
	t_stk	*tmp;

	tmp = sta;
	i = 0;
	minn = tmp->six;
	while (tmp->next)
	{
		if (tmp->six < minn)
		{
			minn = tmp->six;
			minp = i;
		}
		i++;
		tmp = tmp->next;
	}
	return (i);
}

void	ft_pushmin(t_stk **sta, t_stk **stb)
{
	int	minp;
	int	i;

	minp = ft_posmin(*sta);
	i = 0;
	if (minp <= ft_stksize(*sta, NULL) / 2)
	{
		while (i < minp)
		{
			ra(sta);
			i++;
		}
	}
	else
	{
		ft_printf("i %d minp %d pos %d\n", i, minp,ft_stksize(*sta, NULL) - minp);
		while (i < ft_stksize(*sta, NULL) - minp)
		{
			rra(sta, 1);
			i++;
		}
	}
	pb(stb, sta);
}

void	ft_simple5(t_stk **sta, t_stk **stb)
{
	while (ft_stksize(*sta, NULL) > 1)
		ft_pushmin(sta, stb);
	while (ft_stksize(*stb, NULL))
		pa(sta, stb);
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
		ft_simple5(sta, stb);
}
