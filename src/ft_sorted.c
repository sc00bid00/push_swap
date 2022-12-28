/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsordo <lsordo@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 13:22:44 by lsordo            #+#    #+#             */
/*   Updated: 2022/12/28 15:35:31 by lsordo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "get_next_line.h"

int	ft_sorted(t_stk	*stk)
{
	int		idnt;
	int		num;
	t_stk	*tmp;

	idnt = 1;
	tmp = stk;
	num = tmp->six;
	while (tmp->next)
	{
		tmp = tmp->next;
		if (num > tmp->six)
		{
			idnt = 0;
			break ;
		}
		num = tmp->six;
	}
	return (idnt);
}
