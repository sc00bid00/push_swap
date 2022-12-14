/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_slast.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsordo <lsordo@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 14:08:44 by lsordo            #+#    #+#             */
/*   Updated: 2022/12/14 14:11:06 by lsordo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
// return tail of stack

t_stk	*ft_slast(t_stk *stk)
{
	while(stk->next)
	{
		stk = stk->next;
	}
	return (stk);
}
