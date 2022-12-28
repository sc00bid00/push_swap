/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsordo <lsordo@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 15:06:38 by lsordo            #+#    #+#             */
/*   Updated: 2022/12/27 15:55:43 by lsordo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rb(t_stk **stb, t_var *var)
{
	t_stk	*head;
	t_stk	*tail;

	if (ft_stksize(*stb, NULL) > 1)
	{
		head = *stb;
		tail = *stb;
		while (tail->next)
			tail = tail->next;
		*stb = (*stb)->next;
		tail->next = head;
		head->next = NULL;
		var->scr++;
		if (var->prt)
			ft_printf("rb\n");
	}
}
