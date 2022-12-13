/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_px.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsordo <lsordo@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 12:21:06 by lsordo            #+#    #+#             */
/*   Updated: 2022/12/13 18:35:39 by lsordo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
// head of stack a becomes head of stack b

void	ft_px(t_stk **src, t_stk **dst)
{
	t_stk	*tmp;

	if (*src == NULL)
		;
	else
	{
		if (*dst == NULL)
			*dst = ft_newstk();
		tmp = *src;
		*src = (*src)->next;
		tmp->next = *dst;
		*dst = tmp;
		if ((*dst)->next->oix == 0)
			(*dst)->next = NULL;
	}
}
