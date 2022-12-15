/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrots.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsordo <lsordo@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 19:12:37 by lsordo            #+#    #+#             */
/*   Updated: 2022/12/14 19:46:28 by lsordo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_rrots(t_stk *stk, int *start, int *end)
{
	int		n;
	int		i;
	int		j;
	t_stk	*tmp;

	n = ft_stksize(stk);
	tmp = stk;
	j = 0;
	i = 0;
	while (tmp)
	{
		if(tmp->six >= *start && tmp->six <= *end)
			j = i;
		i++;
		tmp = tmp->next;
	}
	j = n-j;
	return (j);
}
