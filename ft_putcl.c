/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putcl.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsordo <lsordo@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 19:29:31 by lsordo            #+#    #+#             */
/*   Updated: 2022/12/15 11:38:26 by lsordo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_putcl(t_stk **src, t_stk **dst)
{
	if (ft_ismax((*src)->six, *dst))
		ft_px(src, dst);
	else if (ft_ismin((*src)->six, *dst))
	{
		ft_px(src, dst);
		ft_rx(dst, 1);
	}
	else
	{
		ft_rx(dst, ft_rottsml((*src)->six, *dst));
		ft_px(src, dst);
	}
}
