/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rottsml.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsordo <lsordo@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 11:04:50 by lsordo            #+#    #+#             */
/*   Updated: 2022/12/15 11:50:39 by lsordo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_rottsml(int n, t_stk *stk)
{
	int		i;
	int		p;
	int		f;

	i = 0;
	while (stk->next)
	{
		p = stk->six;
		f = stk->next->six;
		if((p > n && n > f) || f > p)
			return (i);
		i++;
		stk = stk->next;
	}
	return (0);
}
