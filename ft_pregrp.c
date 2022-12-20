/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pregrp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsordo <lsordo@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 16:05:45 by lsordo            #+#    #+#             */
/*   Updated: 2022/12/20 14:24:47 by lsordo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_mvlast(t_stk **sta, t_stk **stb, t_var *var)
{
	int	i;

	i = 0;
	while (i < ft_findlast(*sta, var))
	{
		rra(sta, 1);
		i++;
	}
	ft_printf("Pushing index %d\n", (*sta)->six);
	pa(sta, stb);
	rb(stb);
}

void	ft_mvfirst(t_stk **sta, t_stk **stb, t_var *var)
{
	int	i;

	i = 0;
	while (i < ft_findfirst(*sta, var))
	{
		ra(sta);
		i++;
	}
	ft_printf("Pushing index %d\n", (*sta)->six);
	pa(sta, stb);
}

void	ft_pregrp(t_stk **sta, t_stk **stb, t_var *var)
{
	int	i;
	int	j;

	i = 0;
	while (ft_stksize(*sta, var))
	{
		var->cl1f = i * var->clsz;
		var->cl1t = var->cl1f + var->clsz - 1;
		var->cl2t = var->cl1t + 1 + var->clsz;
		j = 0;
		while (j < 2 * var->clsz)
		{
			if (ft_isnstk(*sta, var))
			{
				if (ft_findfirst(*sta, var) <= ft_findlast(*sta, var))
					ft_mvfirst(sta, stb, var);
				else
					ft_mvlast(sta, stb, var);
			}
			j++;
		}
		i++;
	}
}
