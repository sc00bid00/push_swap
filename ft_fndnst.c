/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fndnst.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsordo <lsordo@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 09:43:48 by lsordo            #+#    #+#             */
/*   Updated: 2022/12/14 13:23:29 by lsordo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
// returns the location in the stack of an elemnt basing on its sorted index

int	ft_fndnst(t_stk *stk, int x)
{
	int	n;
	int	p;

	n = ft_stksize(stk);
	p = 1;
	while (p <= n && stk->six != x)
	{
		p++;
		stk = stk->next;
	}
	return (p);
}
