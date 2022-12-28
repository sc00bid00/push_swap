/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsordo <lsordo@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 13:22:44 by lsordo            #+#    #+#             */
/*   Updated: 2022/12/28 13:24:28 by lsordo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "get_next_line.h"

int	ft_sorted(t_stk	*stk)
{
	int		idnt;
	t_stk	*tmp;

	idnt = 1;
	tmp = stk;
	while (tmp)
	{
		if (tmp->six != tmp->oix)
		{
			idnt = 0;
			break ;
		}
		tmp = tmp->next;
	}
	return (idnt);
}
