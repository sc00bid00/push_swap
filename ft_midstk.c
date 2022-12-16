/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_midstk.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsordo <lsordo@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 07:47:49 by lsordo            #+#    #+#             */
/*   Updated: 2022/12/16 07:58:29 by lsordo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
// returns 0 if index is in 1st stk half (then r), 1 if in 2nd (then rr)

int	ft_midstk(int x, t_stk *stk)
{
	int		size;
	int		i;

	size = ft_stksize(stk);
	i = 0;
	while (stk)
	{
		if (x == stk->six)
			break;
		i++;
		stk = stk->next;
	}
	if (i <= size / 2)
		return (0);
	return (1);
}
