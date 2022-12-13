/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_newstk.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsordo <lsordo@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 17:08:05 by lsordo            #+#    #+#             */
/*   Updated: 2022/12/13 12:05:00 by lsordo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
// initiates the stack creating the head of list
t_stk	*ft_newstk(char **argv, int n)
{
	t_stk	*lst;

	lst = malloc(sizeof(t_stk));
	if (!lst)
		return (NULL);
	lst->next = NULL;
	ft_addstk(&lst, argv, n);
	return (lst);
}
