/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rx.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsordo <lsordo@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 17:48:24 by lsordo            #+#    #+#             */
/*   Updated: 2022/12/14 19:53:34 by lsordo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
// head of stack moves to tail

void	ft_rx(t_stk **stk, int n)
{
	t_stk	*head;
	t_stk	*tmp;
	int		i;

	i = 0;
	while (i < n)
	{
		if (*stk != NULL)
		{
			tmp = *stk;
			head = tmp->next;
			while (tmp->next)
				tmp = tmp->next;
			tmp->next = *stk;
			(*stk)->next = NULL;
			*stk = head;
		}
		i++;
	}
}
