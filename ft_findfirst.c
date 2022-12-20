/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_findfirst.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsordo <lsordo@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 11:07:13 by lsordo            #+#    #+#             */
/*   Updated: 2022/12/20 11:51:27 by lsordo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
// return positions from head of first cluster element if present else -1

int	ft_findfirst(t_stk *stk, int from, int to)
{
	int	i;

	i = 0;
	while (stk)
	{
		if (stk->six >= from && stk->six < to)
			return (i);
		i++;
		stk = stk->next;
	}
	return (-1);
}
