/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsordo <lsordo@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 14:43:10 by lsordo            #+#    #+#             */
/*   Updated: 2022/12/21 12:04:04 by lsordo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_stk **stk)
{
	t_stk	*tmp;

	if ((*stk) && (*stk)->next)
	{
		tmp = (*stk)->next;
		(*stk)->next = (*stk)->next->next;
		tmp->next = (*stk);
		(*stk) = tmp;
	}
	ft_printf("sa\n");
}
