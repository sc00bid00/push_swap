/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rr.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsordo <lsordo@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 15:07:45 by lsordo            #+#    #+#             */
/*   Updated: 2022/12/27 15:56:27 by lsordo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rr(t_stk **sta, t_stk **stb, t_var *var)
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
	}
	if (ft_stksize(*stb, NULL) > 1)
	{
		head = *stb;
		tail = *stb;
		while (tail->next)
			tail = tail->next;
		*stb = (*stb)->next;
		tail->next = head;
		head->next = NULL;
	}
	var->scr++;
	if (var->prt)
		ft_printf("rr\n");
}
