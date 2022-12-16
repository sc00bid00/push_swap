/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_maxind.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsordo <lsordo@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 08:19:56 by lsordo            #+#    #+#             */
/*   Updated: 2022/12/16 08:22:51 by lsordo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
// return the highest index number in the stack

int	ft_maxind(t_stk *stk)
{
	int	max;

	max = stk->six;
	while (stk->next)
	{
		stk = stk->next;
		if (stk->six > max)
			max = stk->six;
	}
	return (max);
}


