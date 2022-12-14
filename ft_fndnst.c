/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fndnst.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsordo <lsordo@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 09:43:48 by lsordo            #+#    #+#             */
/*   Updated: 2022/12/14 12:00:59 by lsordo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
// finds the nearest element either head or tail

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
