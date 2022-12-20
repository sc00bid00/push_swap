/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsordo <lsordo@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 14:04:57 by lsordo            #+#    #+#             */
/*   Updated: 2022/12/20 16:06:16 by lsordo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_stk **stb, t_stk **sta)
{
	t_stk	*tmp;

	tmp = *stb;
	*stb = (*stb)->next;
	if (!sta)
	{
		*sta = tmp;
		(*sta)->next = NULL;
	}
	else
	{
		tmp->next = *sta;
		*sta = tmp;
	}
	ft_printf("pa\n");
}
