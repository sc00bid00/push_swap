/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_restack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsordo <lsordo@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 18:10:28 by lsordo            #+#    #+#             */
/*   Updated: 2022/12/20 18:29:43 by lsordo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_getlast(t_stk *stk)
{
	t_stk	*tmp;

	tmp = stk;
	while (tmp->next)
		tmp = tmp->next;
	return (tmp->six);
}

void	ft_restack(t_stk **sta, t_stk **stb)
{
	int	first;
	int	last;

	while (ft_stksize(*stb, NULL))
	{
		first = (*stb)->six;
		last = ft_getlast(*stb);
		if (first >= last)
			pa(stb, sta);
		else
		{
			rrb(stb, 1);
			pa(stb, sta);
		}
	}
}
