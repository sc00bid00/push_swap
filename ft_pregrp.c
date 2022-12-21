/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pregrp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsordo <lsordo@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 16:05:45 by lsordo            #+#    #+#             */
/*   Updated: 2022/12/21 16:44:13 by lsordo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_mvlast(t_stk **sta, t_stk **stb, t_var *var)
{
	int		i;
	int		j;

	j = ft_findlast(*sta, var);
	i = 0;
	while (i < j)
	{
		rra(sta, 1);
		i++;
	}
	pb(sta, stb);
}

void	ft_mvfirst(t_stk **sta, t_stk **stb, t_var *var)
{
	int	i;
	int	j;

	j = ft_findfirst(*sta, var);
	i = 0;
	while (i < j)
	{
		ra(sta);
		i++;
	}
	pb(sta, stb);
	if ((*stb)->next && (*stb)->six < (*stb)->next->six)
		sb(stb);
}

void	ft_pregrp(t_stk **sta, t_stk **stb, t_var *var)
{
	int	i;

	i = 0;
	while (ft_stksize(*sta, NULL))
	{
		var->clstart = i * var->clsize;
		var->clmid = var->clstart + var->clsize;
		var->clend = var->clstart + 2 * var->clsize;
		while (ft_isnstk(*sta, var))
		{
			if (ft_findfirst(*sta, var) < ft_findlast(*sta, var))
				ft_mvfirst(sta, stb, var);
			else
				ft_mvlast(sta, stb, var);
			if ((*stb)->six > var->clmid)
				rb(stb);
		}
		i += 2;
	}
}
