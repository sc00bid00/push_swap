/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prtlst.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsordo <lsordo@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 17:08:41 by lsordo            #+#    #+#             */
/*   Updated: 2022/12/10 17:10:45 by lsordo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_prtlst(t_list *lst)
{
	while (lst)
	{
		printf("%d %d\n", lst->oix, lst->num);
		lst=lst->next;
	}
}
