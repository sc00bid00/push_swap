/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pregrp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsordo <lsordo@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 16:05:45 by lsordo            #+#    #+#             */
/*   Updated: 2022/12/19 16:33:27 by lsordo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_pregrp(t_stk **sta, t_stk **stb, t_var *var)
{
	int		i;

	i = 0;
	while (i < var->staz)
	{
		if ((*sta)->six <= var->stah)
			pa(sta, stb);
		else
			ra(sta);
		i++;
	}
}
