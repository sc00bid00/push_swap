/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_px.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsordo <lsordo@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 12:21:06 by lsordo            #+#    #+#             */
/*   Updated: 2022/12/15 20:40:01 by lsordo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
// head of stack a becomes head of stack b

void	ft_px(t_stk **src, t_stk **dst)
{
	t_stk	*tmp;

	if (*src != NULL)
	{
		tmp = *src;
		if ((*src)->next != NULL)
			*src = (*src)->next;
		else
			*src = NULL;
		if (*dst == NULL)
		{
			*dst = tmp;
			(*dst)->next = NULL;
		}
		else if(*dst != NULL)
		{
			tmp->next = *dst;
			*dst = tmp;
		}
	}
}
