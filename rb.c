/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsordo <lsordo@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 15:06:38 by lsordo            #+#    #+#             */
/*   Updated: 2022/12/19 15:07:03 by lsordo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rb(t_stk **stb)
{
	t_stk	*head;
	t_stk	*tail;

	head = *stb;
	tail = *stb;
	while (tail->next)
		tail = tail->next;
	*stb = (*stb)->next;
	tail->next = head;
	head->next = NULL;
	ft_printf("rb\n");
}
