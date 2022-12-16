/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_minind.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsordo <lsordo@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 08:25:31 by lsordo            #+#    #+#             */
/*   Updated: 2022/12/16 08:26:07 by lsordo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
// return the lowest index number in the stack

int	ft_minind(t_stk *stk)
{
	int	min;

	min = stk->six;
	while (stk->next)
	{
		stk = stk->next;
		if (stk->six < min)
			min = stk->six;
	}
	return (min);
}

