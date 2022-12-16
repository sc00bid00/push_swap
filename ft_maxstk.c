/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_maxstk.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsordo <lsordo@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 07:29:51 by lsordo            #+#    #+#             */
/*   Updated: 2022/12/16 07:41:51 by lsordo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
// return position of highest index in the stack

int	ft_maxstk(t_stk *stk)
{
	int	i;
	int	j;
	int	max;

	max = stk->six;
	j = 0;
	i = 0;
	while (stk->next)
	{
		stk = stk->next;
		i++;
		if (stk->six > max)
		{
			max = stk->six;
			j = i;
		}
	}
	return (j);
}
