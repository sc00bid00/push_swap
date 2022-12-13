/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prtlst.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsordo <lsordo@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 17:21:44 by lsordo            #+#    #+#             */
/*   Updated: 2022/12/13 12:05:21 by lsordo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
// prints the list to screeen used for debugging and surveillance
void	ft_prtlst(t_stk *lst)
{
	while (lst)
	{
		ft_printf("%d %d %d\n", lst->oix, lst->six, lst->num);
		lst = lst->next;
	}
}
