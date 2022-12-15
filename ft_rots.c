/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rots.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsordo <lsordo@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 19:07:47 by lsordo            #+#    #+#             */
/*   Updated: 2022/12/14 19:28:30 by lsordo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_rots(t_stk *stk, int *start, int *end)
{
	t_stk	*tmp;
	int		i;

	tmp = stk;
	i = 0;
	while (tmp)
	{
		if(tmp->six >= *start && tmp->six <= *end)
			break;
		i++;
		tmp = tmp->next;
	}
	return (i);
}
