/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsordo <lsordo@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 14:37:57 by lsordo            #+#    #+#             */
/*   Updated: 2022/12/19 14:54:55 by lsordo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pb(t_stk **stb, t_stk **sta)
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
	ft_printf("pb\n");
}
