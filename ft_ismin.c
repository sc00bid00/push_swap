/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ismin.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsordo <lsordo@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 14:30:00 by lsordo            #+#    #+#             */
/*   Updated: 2022/12/14 14:34:05 by lsordo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
// gets the minimum number of rotations

int	ft_ismin(int a, int b)
{
	int	r;

	if(ft_abs(a) <= ft_abs(b))
	{
		if (a >= 0)
			r = a;
		else
			r = -a;
	}
	else
	{
		if (b >= 0)
			r = b;
		else
			r = -b;
	}
	return (r);
}
