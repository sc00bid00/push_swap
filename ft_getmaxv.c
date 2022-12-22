/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getmaxv.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsordo <lsordo@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 13:23:52 by lsordo            #+#    #+#             */
/*   Updated: 2022/12/22 14:17:28 by lsordo           ###   ########.fr       */
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
	var->maxp2 = i;
	while (tmp->next)
	{
		tmp = tmp->next;
		i++;
		if (tmp->six == var->maxn)
			var->maxp = i;
		if (tmp->six == var->maxn2)
			var->maxp2 = i;
	}
	tmp = stk;
	i = 0;
	while (tmp->next)
	{
		if (tmp->six == var->maxn2)
			var->maxp2 = i;
		tmp = tmp->next;
		i++;
	}
}

void	ft_getmaxv(t_stk *stk, t_var *var)
{
	t_stk	*tmp;

	tmp = stk;
	if(tmp)
	{
		var->maxn = tmp->six;
		var->maxn2 = tmp->six;
		while (tmp->next)
		{
			tmp = tmp->next;
			if (tmp->six > var->maxn)
				var->maxn = tmp->six;
		}
		while (tmp->next)
		{
			tmp = tmp->next;
			if (tmp->six < var->maxn2 && tmp->six != var->maxn)
				var->maxn2 = tmp->six;
		}
	}
	ft_getmaxp(stk, var);
}
