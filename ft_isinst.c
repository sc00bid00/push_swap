/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isinst.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsordo <lsordo@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 14:54:46 by lsordo            #+#    #+#             */
/*   Updated: 2022/12/14 14:57:05 by lsordo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
// return 1 if the index is found in the stack

int	ft_isinst(t_stk *stk, int ix)
{
	while(stk->next)
	{
		if (stk->six == ix)
			return (1);
		stk = stk->next;
	}
	return (0);
}
