/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsordo <lsordo@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 14:04:57 by lsordo            #+#    #+#             */
/*   Updated: 2022/12/19 14:20:20 by lsordo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// void	ft_abrtst(t_stk **sta, t_stk **stb)
// {
// 	t_stk	*tmp;

// 	while (*sta)
// 	{
// 		tmp = *sta;
// 		if (tmp->next)
// 			tmp = tmp->next;
// 		free(*sta);
// 		*sta = tmp;
// 	}
// 	while (*stb)
// 	{
// 		tmp = *stb;
// 		if (tmp->next)
// 			tmp = tmp->next;
// 		free(*stb);
// 		*stb = tmp;
// 	}
// }

void	pa(t_stk **sta, t_stk **stb)
{
	t_stk	*tmp;

	tmp = *sta;
	*sta = (*sta)->next;
	if (!stb)
	{
		*stb = tmp;
		(*stb)->next = NULL;
	}
	else
	{
		tmp->next = *stb;
		*stb = tmp;
	}
	ft_printf("pa\n");
}
