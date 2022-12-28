/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsordo <lsordo@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 14:37:57 by lsordo            #+#    #+#             */
/*   Updated: 2022/12/28 15:52:07 by lsordo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pb(t_stk **stb, t_stk **sta, t_var *var)
{
	t_stk	*tmp;

	if (*sta)
	{
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
		var->scr++;
		if (var->prt)
			ft_printf("pb\n");
	}
}
