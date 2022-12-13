/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pa.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsordo <lsordo@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 12:21:06 by lsordo            #+#    #+#             */
/*   Updated: 2022/12/13 14:51:20 by lsordo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
// head of stack a becomes head of stack b

void	ft_pa(t_stk **stka, t_stk **stkb)
{
	t_stk	*tmp;

	tmp = *stka;
	*stka = (*stka)->next;
	tmp->next = *stkb;
	*stkb = tmp;
}
