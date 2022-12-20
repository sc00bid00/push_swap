/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pregrp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsordo <lsordo@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 16:05:45 by lsordo            #+#    #+#             */
/*   Updated: 2022/12/20 11:52:23 by lsordo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_pregrp(t_stk **sta, t_stk **stb, t_var *var)
{
	int	i;

	i = 0;
	while (i < var->clnb - 1)
	{
		var->cl1f = i * var->clsz;
		var->cl1t = var->cl1f + var->clsz;
		var->cl2t = var->cl1t + var->clsz;
		ft_prtstk(*sta, *stb);
		if (ft_isnstk())
		i++;
	}
}
