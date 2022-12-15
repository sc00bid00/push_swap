/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putcl.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsordo <lsordo@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 19:29:31 by lsordo            #+#    #+#             */
/*   Updated: 2022/12/14 20:27:42 by lsordo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_putcl(t_stk **src, t_stk **dst)
{
	int	r;
	int	rr;
	int	start;

	if(ft_stksize(*dst) > 1)
	{
		start = (*src)->six;
		r = ft_rots(*dst, &start, &start);
		rr
	}


	ft_px(src, dst);
}
