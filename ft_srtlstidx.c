/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_srtlstidx.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsordo <lsordo@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 21:56:10 by lsordo            #+#    #+#             */
/*   Updated: 2022/12/11 22:00:36 by lsordo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lists.h"

t_list	*ft_srtlstidx(t_list* lst, int (*ft_cmp)(int, int))
{
	t_list	*tlst;

	tlst = lst;
	while (lst->next)
	{
		if(!ft_cmp(lst->oix, lst->next->oix))
		{
			ft_swapidx(lst, lst->next);
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
