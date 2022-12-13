/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_newstk.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsordo <lsordo@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 17:08:05 by lsordo            #+#    #+#             */
/*   Updated: 2022/12/13 15:36:23 by lsordo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
// initiates the stack creating the head of list
t_stk	*ft_newstk(void)
{
	t_stk	*lst;

	lst = malloc(sizeof(t_stk));
	if (!lst)
		return (NULL);
	lst->next = NULL;
	return (lst);
}
