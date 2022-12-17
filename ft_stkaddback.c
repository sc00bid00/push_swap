/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stkaddback.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsordo <lsordo@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 08:20:50 by lsordo            #+#    #+#             */
/*   Updated: 2022/12/17 08:51:51 by lsordo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_stkaddback(t_stk **stk, t_stk *new)
{
	t_stk	*ptr;

	ptr = ft_stklast(*stk);
	if (ptr)
		ptr->next = new;
	else
		*stk = new;
}
