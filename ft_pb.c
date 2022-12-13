/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsordo <lsordo@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 14:16:29 by lsordo            #+#    #+#             */
/*   Updated: 2022/12/13 15:57:26 by lsordo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
// head of stak b becomes head of stack a

void	ft_pb(t_stk **stka, t_stk **stkb)
{
	t_stk	*tmp;

	tmp = *stkb;
	*stkb = (*stkb)->next;
	tmp->next = *stka;
	*stka = tmp;
	if((*stka)->next->oix == 0)
		(*stka)->next = NULL;
}
