/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsordo <lsordo@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 14:04:57 by lsordo            #+#    #+#             */
/*   Updated: 2022/12/29 08:36:36 by lsordo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

void	pa(t_stk **sta, t_stk **stb, t_var *var)
{
	t_stk	*tmp;
	if (*stb)
	{
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
		var->scr++;
		if (var->prt)
			ft_printf("pa\n");
	}
}
