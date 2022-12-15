/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsordo <lsordo@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 13:50:57 by lsordo            #+#    #+#             */
/*   Updated: 2022/12/15 23:05:29 by lsordo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		ft_cntmvs(int x, t_stk *stk)
{
	int	i;

	i = 0;
	while (stk && x < stk->six)
	{
		stk = stk->next;
		i++;
	}
	return (i);
}

void	ft_srtback(t_stk **stk)
{
	int	i;
	int	j;
	int	max;

	j = 0;
	i = 0;
	max = (*stk)->six;
	while(*stk)
	{
		if ((*stk)->six > max)
		{
			j = i;
			max = (*stk)->six;
		}
		i++;
		*stk = (*stk)->next;
	}
	if (j > ft_stksize(*stk) / 2)
		ft_rrx(stk, ft_stksize(*stk) - j);
	else
		ft_rx(stk, j);
}

void	ft_sort(t_stk **stka, t_stk	**stkb)
{
	if(ft_ismax((*stka)->six, *stkb))
		ft_px(stka, stkb);
	if(ft_ismin((*stka)->six, *stkb))
		{
			ft_px(stka, stkb);
			ft_rx(stkb, 1);
		}
	if(ft_cntmvs((*stka)->six, *stkb) > (ft_stksize(*stka) / 2))
		ft_rrx(stkb, ft_stksize(*stkb) - ft_cntmvs((*stka)->six, *stkb));
	else
		ft_rx(stkb, ft_cntmvs((*stka)->six, *stkb));
	ft_px(stka, stkb);
	ft_srtback(stkb);
}
