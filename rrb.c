/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrb.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsordo <lsordo@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 15:15:25 by lsordo            #+#    #+#             */
/*   Updated: 2022/12/19 15:15:59 by lsordo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rrb(t_stk **stb)
{
	t_stk	*tail;
	t_stk	*sndl;

	tail = *stb;
	while (tail->next)
		tail = tail->next;
	sndl = *stb;
	while (sndl->next->next)
		sndl = sndl->next;
	sndl->next = NULL;
	tail->next = *stb;
	*stb = tail;
	ft_printf("rrb\n");
}
