/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsordo <lsordo@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 15:09:04 by lsordo            #+#    #+#             */
/*   Updated: 2022/12/29 08:36:36 by lsordo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

void	rra(t_stk **sta, int msg, t_var *var)
{
	t_stk	*tail;
	t_stk	*sndl;

	if (ft_stksize(*sta, NULL) > 1)
	{
		tail = *sta;
		while (tail->next)
			tail = tail->next;
		sndl = *sta;
		while (sndl->next->next)
			sndl = sndl->next;
		sndl->next = NULL;
		tail->next = *sta;
		*sta = tail;
		if (msg)
		{
			var->scr++;
			if (var->prt)
				ft_printf("rra\n");
		}
	}
}
