/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isnstk.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsordo <lsordo@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 11:16:21 by lsordo            #+#    #+#             */
/*   Updated: 2022/12/20 11:21:06 by lsordo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
// returns 1 if cluster element contained in stack else 0

int	ft_isnstk(t_stk *stk, int from, int to)
{
	while (stk)
	{
		if (stk->six >= from && stk->six < to)
			return (1);
		stk = stk->next;
	}
	return (0);
}
