/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pstkid.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsordo <lsordo@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 10:14:29 by lsordo            #+#    #+#             */
/*   Updated: 2022/12/16 08:36:12 by lsordo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_pstkid(t_stk *stk)
{
	ft_printf("oix\tsix\tnum\n");
	ft_printf("-------------------\n");
	while (stk)
	{
		ft_printf("%d\t%d\t%d\n", stk->oix, stk->six, stk->num);
		stk = stk->next;
	}
	ft_printf("\n");
}
