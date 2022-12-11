/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_srtlstnum.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsordo <lsordo@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 20:38:27 by lsordo            #+#    #+#             */
/*   Updated: 2022/12/11 21:44:14 by lsordo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lists.h"

t_list	*ft_srtlstnum(t_list* lst, int (*ft_cmp)(int, int))
{
	t_list	*tlst;

	tlst = lst;
	while (lst->next)
	{
		if(!ft_cmp(lst->num, lst->next->num))
		{
			ft_swap(lst, lst->next);
			lst = tlst;
		}
		else
		{
			lst = lst->next;
		}
	}
	lst = tlst;
	return(tlst);
}
