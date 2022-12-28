/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_idntt.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsordo <lsordo@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 16:46:11 by lsordo            #+#    #+#             */
/*   Updated: 2022/12/21 10:16:03 by lsordo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_idntt(t_stk **sta, t_var *var)
{
	int		idnt;
	t_stk	*tmp;

	idnt = 1;
	tmp = *sta;
	while (tmp)
	{
		if (tmp->six != tmp->oix)
		{
			idnt = 0;
			break ;
		}
		tmp = tmp->next;
	}
	if (idnt)
	{
		ft_freearg(sta);
		free(var);
		exit(0);
	}
}
