/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pushtail.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsordo <lsordo@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 11:54:13 by lsordo            #+#    #+#             */
/*   Updated: 2022/12/22 10:57:14 by lsordo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_pushtail(t_stk **sta, t_stk **stb, t_var *var)
{
	int	i;

	var->stbz = ft_stksize(*stb, NULL);
	var->maxp = var->stbz - var->maxp;
	i = 0;
	while (i < var->maxp)
	{
		i++;
		rrb(stb, 1);
	}
	pa(sta, stb);
	if ((*sta)->next && (*sta)->six > (*sta)->next->six)
		sa(sta);
}
