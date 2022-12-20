/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrb.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsordo <lsordo@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 15:15:25 by lsordo            #+#    #+#             */
/*   Updated: 2022/12/20 11:30:55 by lsordo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rrb(t_stk **stb, int msg)
{
	t_stk	*tail;
	t_stk	*sndl;

	if (ft_stksize(*stb, NULL) > 1)
	{
		tail = *stb;
		while (tail->next)
			tail = tail->next;
		sndl = *stb;
		while (sndl->next->next)
			sndl = sndl->next;
		sndl->next = NULL;
		tail->next = *stb;
		*stb = tail;
		if (msg)
			ft_printf("rrb\n");
	}
}
