/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_addstk.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsordo <lsordo@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 19:07:41 by lsordo            #+#    #+#             */
/*   Updated: 2022/12/14 11:44:02 by lsordo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
// setup stack a: adds a node and idexes it

void	ft_addstk(t_stk **stk, char **argv, int n)
{
	int		i;
	t_stk	*tmp;

	tmp = *stk;
	i = 0;
	while (i < n)
	{
		(*stk)->num = ft_atoi(argv[i]);
		(*stk)->oix = i;
		(*stk)->six = i;
		if (i == n - 1)
			(*stk)->next = NULL;
		else
		{
			(*stk)->next = malloc(sizeof(t_stk));
			if (!(*stk)->next)
				ft_freall(*stk);
			*stk = (*stk)->next;
		}
		i++;
	}
	*stk = tmp;
}
