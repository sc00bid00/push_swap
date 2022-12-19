/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prtstk.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsordo <lsordo@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 08:38:20 by lsordo            #+#    #+#             */
/*   Updated: 2022/12/19 14:40:44 by lsordo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_prtstk(t_stk	*sta, t_stk *stb)
{
	while (sta || stb)
	{
		if (sta)
		{
			ft_printf("%d\t%d\t%d\t", sta->oix, sta->six, sta->num);
			sta = sta->next;
		}
		else
			ft_printf("\t\t\t\t");
		if (stb)
		{
			ft_printf("%d\t%d\t%d\n", stb->oix, stb->six, stb->num);
			stb = stb->next;
		}
		else
			ft_printf("\n");
	}
	ft_printf("\n");
}
