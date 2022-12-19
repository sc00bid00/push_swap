/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_freearg.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsordo <lsordo@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 22:21:23 by lsordo            #+#    #+#             */
/*   Updated: 2022/12/19 09:07:14 by lsordo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_freearg(t_stk **arg)
{
	t_stk	*tmp;

	if (*arg && !(*arg)->next)
		free(*arg);
	while ((*arg)->next)
	{
		if ((*arg)->next)
			tmp = (*arg)->next;
		free(*arg);
		*arg = tmp;
	}
	free(*arg);
}
