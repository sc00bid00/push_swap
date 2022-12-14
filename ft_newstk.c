/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_newstk.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsordo <lsordo@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 17:08:05 by lsordo            #+#    #+#             */
/*   Updated: 2022/12/14 11:42:56 by lsordo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
// initiates the stack creating an empty head

t_stk	*ft_newstk(void)
{
	t_stk	*stk;

	stk = malloc(sizeof(t_stk));
	if (!stk)
		return (NULL);
	stk->next = NULL;
	return (stk);
}
