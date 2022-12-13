/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_idxstk.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsordo <lsordo@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 19:36:36 by lsordo            #+#    #+#             */
/*   Updated: 2022/12/13 05:53:28 by lsordo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_idxstk(t_stk **stk, int (*ft_cmp)(int, int))
{
	t_stk	*tmp;

	tmp = *stk;
	while (tmp->next)
	{
		if (!ft_cmp(tmp->num, tmp->next->num))
		{
			ft_swap(tmp, tmp->next);
			tmp = *stk;
		}
		else
			tmp = tmp->next;
	}
	tmp = *stk;
	while (tmp->next)
	{
		if (!ft_cmp(tmp->oix, tmp->next->oix))
		{
			ft_swapx(tmp, tmp->next);
			tmp = *stk;
		}
		else
			tmp = tmp->next;
	}
	tmp = *stk;
}
