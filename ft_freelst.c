/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_freelst.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsordo <lsordo@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 18:44:30 by lsordo            #+#    #+#             */
/*   Updated: 2022/12/11 21:32:24 by lsordo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lists.h"

t_list	*ft_freelst(t_list *lst)
{
	t_list	*tmp;

	while (lst)
	{
		if (lst->next)
			tmp = lst->next;
		free (lst);
		lst = tmp;
	}
	return (NULL);
}
