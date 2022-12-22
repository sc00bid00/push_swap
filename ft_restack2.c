/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_restack2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsordo <lsordo@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 11:42:46 by lsordo            #+#    #+#             */
/*   Updated: 2022/12/22 13:40:55 by lsordo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_pushtail2(t_stk **sta, t_stk **stb, t_var *var)
{
	int	i;

	var->stbz = ft_stksize(*stb, NULL);
	var->maxp2 = var->stbz - var->maxp2;
	i = 0;
	while (i < var->maxp2)
	{
		i++;
		rrb(stb, 1);
	}
	pa(sta, stb);
	var->cpt2++;
}

void	ft_pushhead2(t_stk **sta, t_stk **stb, t_var *var)
{
	int	i;

	var->stbz = ft_stksize(*stb, NULL);
	i = 0;
	while (i < var->maxp2)
	{
		i++;
		rb(stb);
	}
	pa(sta, stb);
	if ((*sta)->next && (*sta)->six > (*sta)->next->six)
		sa(sta);
	var->cph2++;
}

void	ft_pushtail(t_stk **sta, t_stk **stb, t_var *var)
{
	int	i;

	var->stbz = ft_stksize(*stb, NULL);
	var->maxp = var->stbz - var->maxp;
	i = 0;
	while (i < var->maxp)
	{
		i++;
		rrb(stb, 1);
	}
	pa(sta, stb);
	if ((*sta)->next && (*sta)->six > (*sta)->next->six)
		sa(sta);
	var->cpt++;
}

void	ft_pushhead(t_stk **sta, t_stk **stb, t_var *var)
{
	int	i;

	var->stbz = ft_stksize(*stb, NULL);
	i = 0;
	while (i < var->maxp)
	{
		i++;
		rb(stb);
	}
	pa(sta, stb);
	if ((*sta)->next && (*sta)->six > (*sta)->next->six)
		sa(sta);
	var->cph++;
}

void	ft_restack(t_stk **sta, t_stk **stb, t_var *var)
{
	while (ft_stksize(*stb, NULL))
	{
		ft_getmaxv(*stb, var);
		if (var->maxp <= ft_stksize(*stb, NULL) / 2)
		{
			if (var->maxp <= var->maxp2)
				ft_pushhead(sta, stb, var);
			else
				ft_pushhead2(sta, stb, var);
		}
		else
		{
			if (var->maxp >= var->maxp2)
				ft_pushtail(sta, stb, var);
			else
				ft_pushtail2(sta, stb, var);
		}
	}
}
