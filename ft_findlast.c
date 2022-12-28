/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_findlast.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsordo <lsordo@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 11:12:15 by lsordo            #+#    #+#             */
/*   Updated: 2022/12/28 08:37:09 by lsordo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
// returns positions from tail of last cluster element if present, else -1

int	ft_findlast(t_stk *stk, t_var *var)
{
	int		i;
	int		j;
	t_stk	*tmp;

	tmp = stk;
	i = 0;
	j = 0;
	while (tmp)
	{
		if (tmp->six >= var->clstart && tmp->six < var->clend)
			j = i;
		i++;
		tmp = tmp->next;
	}
	j = ft_stksize(stk, NULL) - j;
	return (j);
}
