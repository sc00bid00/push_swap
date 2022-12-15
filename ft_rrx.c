/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrx.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsordo <lsordo@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 09:12:48 by lsordo            #+#    #+#             */
/*   Updated: 2022/12/14 19:53:29 by lsordo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
// tail of stack moves to head

void	ft_rrx(t_stk **stk, int n)
{
	t_stk	*scdl;
	t_stk	*tmp;
	int		i;

	i = 0;
	while (i < n)
	{
		if (*stk != NULL)
		{
			tmp = *stk;
			while (tmp->next->next)
				tmp = tmp->next;
			scdl = tmp;
			tmp = tmp->next;
			scdl->next = NULL;
			tmp->next = *stk;
			*stk = tmp;
		}
		i++;
	}
}
