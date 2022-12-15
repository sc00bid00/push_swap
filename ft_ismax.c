/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ismax.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsordo <lsordo@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 10:59:09 by lsordo            #+#    #+#             */
/*   Updated: 2022/12/15 21:10:14 by lsordo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_ismax(int n, t_stk *stk)
{
	while (stk)
	{
		if (n < stk->six)
			return (0);
		stk = stk->next;
	}
	return (1);
}
