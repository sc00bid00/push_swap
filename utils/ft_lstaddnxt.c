/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstaddnxt.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsordo <lsordo@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 13:45:20 by lsordo            #+#    #+#             */
/*   Updated: 2022/12/10 13:49:22 by lsordo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*ft_lstaddnxt(t_list *head, int *num, int *oix)
{
	t_list	*tmp;

	tmp = head;
	while (tmp)
		tmp = tmp->next;
	tmp = malloc(sizeof(t_list));
	if (tmp == NULL)
		return (NULL); // should clear all correct afterwards
	tmp->next = NULL;
	tmp->num = num;
	tmp->oix = oix;
	return (tmp);
}
