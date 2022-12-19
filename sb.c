/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsordo <lsordo@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 14:53:11 by lsordo            #+#    #+#             */
/*   Updated: 2022/12/19 14:55:30 by lsordo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sb(t_stk **stk)
{
	t_stk	*tmp;

	if ((*stk)->next)
	{
		tmp = (*stk)->next;
		(*stk)->next = (*stk)->next->next;
		tmp->next = (*stk);
		(*stk) = tmp;
	}
	ft_printf("sb\n");
}
