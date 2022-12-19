/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsordo <lsordo@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 15:09:04 by lsordo            #+#    #+#             */
/*   Updated: 2022/12/19 15:16:16 by lsordo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_stk **sta)
{
	t_stk	*tail;
	t_stk	*sndl;

	tail = *sta;
	while (tail->next)
		tail = tail->next;
	sndl = *sta;
	while (sndl->next->next)
		sndl = sndl->next;
	sndl->next = NULL;
	tail->next = *sta;
	*sta = tail;
	ft_printf("rra\n");
}
