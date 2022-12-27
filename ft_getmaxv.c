/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getmaxv.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsordo <lsordo@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 13:23:52 by lsordo            #+#    #+#             */
/*   Updated: 2022/12/27 09:39:30 by lsordo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_getmaxp(t_stk *stk, t_var *var)
{
	int	i;
	t_stk	*tmp;

	tmp = stk;
	i = 0;
	var->maxp = i;
	while (tmp->next)
	{
		tmp = tmp->next;
		i++;
		if (tmp->six == var->maxn)
			var->maxp = i;
	}
}

void	ft_getmaxv(t_stk *stk, t_var *var)
{
	t_stk	*tmp;

	if(stk)
	{
		tmp = stk;
		var->maxn = tmp->six;
		while (tmp->next)
		{
			tmp = tmp->next;
			if (tmp->six > var->maxn)
				var->maxn = tmp->six;
		}
		var->maxn2 = var->maxn - 1;
		var->maxn3 = var->maxn - 2;
	}
	ft_getmaxp(stk, var);
}
