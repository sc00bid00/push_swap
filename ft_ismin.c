/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ismin.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsordo <lsordo@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 11:02:11 by lsordo            #+#    #+#             */
/*   Updated: 2022/12/15 11:03:37 by lsordo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_ismin(int n, t_stk *stk)
{
	while (stk)
	{
		if (n > stk->six)
			return (0);
		stk = stk->next;
	}
	return (1);
}
