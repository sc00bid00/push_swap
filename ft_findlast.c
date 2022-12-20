/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_findlast.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsordo <lsordo@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 11:12:15 by lsordo            #+#    #+#             */
/*   Updated: 2022/12/20 11:50:59 by lsordo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
// returns positions from tail of last cluster element if present, else -1

int	ft_findlast(t_stk *stk, int from, int to)
{
	int		i;
	int		j;
	t_stk	*tmp;

	tmp = stk;
	i = 0;
	j = -1;
	while (tmp)
	{
		if (tmp->six >= from && tmp->six < to)
			j = i;
		i++;
		tmp = tmp->next;
	}
	if (j != -1)
		j = ft_stksize(stk, NULL) - j - 1;
	return (j);
}
