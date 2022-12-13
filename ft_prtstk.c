/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prtstk.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsordo <lsordo@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 17:21:44 by lsordo            #+#    #+#             */
/*   Updated: 2022/12/13 16:54:58 by lsordo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
// prints the list to screeen used for debugging and surveillance
void	ft_prtstk(t_stk *stka, t_stk *stkb)
{
	ft_printf("\na\tb\n");
	ft_printf("----------\n");

	while (stka || stkb)
	{
		if(stka)
		{
			ft_printf("%d\t", stka->num);
			stka = stka->next;
		}
		else
			ft_printf("\t");
		if(stkb)
		{
			ft_printf("%d", stkb->num);
			stkb = stkb->next;
		}
		ft_printf("\n");
	}
}
