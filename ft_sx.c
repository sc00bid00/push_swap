/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sx.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsordo <lsordo@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 17:28:33 by lsordo            #+#    #+#             */
/*   Updated: 2022/12/13 17:44:34 by lsordo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
// swap top in a stack

void	ft_sx(t_stk **src)
{
	t_stk	*tmp;

	if (*src && (*src)->next)
	{
		tmp = (*src)->next;
		(*src)->next = tmp->next;
		tmp->next = *src;
		*src = tmp;
	}
}
