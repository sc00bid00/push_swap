/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsordo <lsordo@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 14:37:57 by lsordo            #+#    #+#             */
/*   Updated: 2022/12/20 16:07:07 by lsordo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pb(t_stk **sta, t_stk **stb)
{
	t_stk	*tmp;

	tmp = *sta;
	*sta = (*sta)->next;
	if (!stb)
	{
		*stb = tmp;
		(*stb)->next = NULL;
	}
	else
	{
		tmp->next = *stb;
		*stb = tmp;
	}
	ft_printf("pb\n");
}
