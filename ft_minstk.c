/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_minstk.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsordo <lsordo@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 07:43:04 by lsordo            #+#    #+#             */
/*   Updated: 2022/12/16 07:43:59 by lsordo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// return position of lowest index in the stack

int	ft_minstk(t_stk *stk)
{
	int	i;
	int	j;
	int	min;

	min = stk->six;
	j = 0;
	i = 0;
	while (stk->next)
	{
		stk = stk->next;
		i++;
		if (stk->six < min)
		{
			min = stk->six;
			j = i;
		}
	}
	return (j);
}
