/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsordo <lsordo@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 15:00:03 by lsordo            #+#    #+#             */
/*   Updated: 2022/12/29 08:36:36 by lsordo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

void	ra(t_stk **sta, t_var *var)
{
	t_stk	*head;
	t_stk	*tail;

	if (ft_stksize(*sta, NULL) > 1)
	{
		head = *sta;
		tail = *sta;
		while (tail->next)
			tail = tail->next;
		*sta = (*sta)->next;
		tail->next = head;
		head->next = NULL;
		var->scr++;
		if (var->prt)
			ft_printf("ra\n");
	}
}
