/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_restack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsordo <lsordo@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 18:10:28 by lsordo            #+#    #+#             */
/*   Updated: 2022/12/21 14:55:21 by lsordo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// void	ft_pushhead(t_stk **sta, t_stk **stb, t_var *var)
// {
// 	int	i;

// 	var->stbz = ft_stksize(*stb, NULL);
// 	i = 0;
// 	while (i < var->maxp)
// 	{
// 		i++;
// 		rb(stb);
// 	}
// 	pa(stb, sta);
// }

// void	ft_pushtail(t_stk **sta, t_stk **stb, t_var *var)
// {
// 	int	i;

// 	var->stbz = ft_stksize(*stb, NULL);
// 	var->maxp = var->stbz - var->maxp;
// 	i = 0;
// 	while (i < var->maxp)
// 	{
// 		i++;
// 		rrb(stb, 1);
// 	}
// 	pa(stb, sta);
// }

void	ft_restack(t_stk **sta, t_stk **stb, t_var *var)
{
	t_stk	*tmp;
	int		i;

	while (ft_stksize(*stb, NULL))
	{
		tmp = *stb;
		i = 0;
		var->maxn = tmp->six;
		var->maxp = i;
		while (tmp->next)
		{
			i++;
			tmp = tmp->next;
			if (tmp->six > var->maxn)
			{
				var->maxp = i;
				var->maxn = tmp->six;
			}
		}
		if (var->maxp <= var->stbz / 2)
			ft_pushhead(sta, stb, var);
		else
			ft_pushtail(sta, stb, var);
	}
}
