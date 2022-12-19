/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsordo <lsordo@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 14:43:10 by lsordo            #+#    #+#             */
/*   Updated: 2022/12/19 14:51:36 by lsordo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_stk **sta)
{
	t_stk	*tmp;

	if ((*sta)->next)
	{
		tmp = (*sta)->next;
		(*sta)->next = (*sta)->next->next;
		tmp->next = (*sta);
		(*sta) = tmp;
	}
	ft_printf("sa\n");
}
