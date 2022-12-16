/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_maxhead.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsordo <lsordo@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 08:16:09 by lsordo            #+#    #+#             */
/*   Updated: 2022/12/16 08:47:51 by lsordo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
//r or rr until max index is head of stack

void	ft_maxhead(t_stk **stk)
{
	int		max;
	int		pmax;
	int		size;

	max = ft_maxind(*stk);
	pmax = ft_maxstk(*stk);
	size = ft_stksize(*stk);
	ft_printf("stk size %d max ind %d positioned %d", size, max, pmax);
	ft_printf(" stk half %d\n", ft_midstk(max, *stk));
	if (ft_midstk(max, *stk))
	{
		ft_printf("%d x rr\n", size - pmax);
		ft_rrx(stk, size - pmax);
	}
	else
	{
		ft_printf("%d xr\n", pmax);
		ft_rx(stk, pmax);
	}
}
