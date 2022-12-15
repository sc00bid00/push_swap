/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pullcl.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsordo <lsordo@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 18:18:50 by lsordo            #+#    #+#             */
/*   Updated: 2022/12/14 20:16:47 by lsordo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_pullcl(t_stk **src, t_stk **dst, int	*start, int *end)
{
	int		r;
	int		rr;
	int		i;

	i= 0;
	while (*start + i < *end)
	{
		r = ft_rots(*src, start, end);
		rr = ft_rrots(*src, start, end);
		if (r < rr)
			ft_rx(src, r);
		else
			ft_rrx(src, rr);
		ft_putcl(src, dst);
		i++;
	}
}
