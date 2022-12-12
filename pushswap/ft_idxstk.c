/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_idxstk.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsordo <lsordo@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 19:36:36 by lsordo            #+#    #+#             */
/*   Updated: 2022/12/12 19:51:59 by lsordo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_idxstk(t_stk **stk, int (*ft_cmp)(int, int),
		void (*ft_swap)(t_stk *, t_stk *),
		void (ft_swapx(t_stk *, t_stk *)))
{
	t_stk	*tmp;

	tmp = *stk;
	while (tmp)
	{
		if (ft_cmp(tmp->num, tmp->next->num))
			ft_swap(tmp, tmp->next);
		tmp = tmp->next;
	}
	tmp = *stk;
	while (tmp)
	{
		if (ft_cmp(tmp->oix, tmp->next->oix))
			ft_swapx(tmp, tmp->next);
	}
}
