/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pushhead.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsordo <lsordo@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 11:53:16 by lsordo            #+#    #+#             */
/*   Updated: 2022/12/21 14:47:48 by lsordo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_pushhead(t_stk **sta, t_stk **stb, t_var *var)
{
	int	i;

	var->stbz = ft_stksize(*stb, NULL);
	i = 0;
	while (i < var->maxp)
	{
		i++;
		rb(stb);
	}
	pa(stb, sta);
	if ((*sta)->next && (*sta)->six > (*sta)->next->six)
		sa(sta);
}
