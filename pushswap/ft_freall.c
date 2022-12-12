/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_freall.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsordo <lsordo@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 17:27:17 by lsordo            #+#    #+#             */
/*   Updated: 2022/12/12 18:46:41 by lsordo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_freall(t_stk *lst)
{
	t_stk	*tmp;

	tmp = lst;
	while (lst)
	{
		if (lst->next)
			tmp = lst->next;
		free(lst);
		lst = tmp;
	}
}
