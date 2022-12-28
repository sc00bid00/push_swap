/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsordo <lsordo@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 14:53:11 by lsordo            #+#    #+#             */
/*   Updated: 2022/12/27 15:52:02 by lsordo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sb(t_stk **stk, int msg, t_var *var)
{
	t_stk	*tmp;

	if ((*stk) && (*stk)->next)
	{
		tmp = (*stk)->next;
		(*stk)->next = (*stk)->next->next;
		tmp->next = (*stk);
		(*stk) = tmp;
	}
	if (msg)
	{
		var->scr++;
		if (var->prt)
			ft_printf("sb\n");
	}
}
