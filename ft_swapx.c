/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swapx.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsordo <lsordo@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 05:23:44 by lsordo            #+#    #+#             */
/*   Updated: 2022/12/13 12:06:21 by lsordo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
// swaps numbers, natural and sorted indexes used while sortng the stack
// back to original state
void ft_swapx(t_stk *lst1, t_stk *lst2)
{
	int	tnum;
	int	toix;
	int	tsix;

	tnum = lst1->num;
	toix = lst1->oix;
	tsix = lst1->six;
	lst1->num = lst2->num;
	lst1->oix = lst2->oix;
	lst1->six = lst2->six;
	lst2->num = tnum;
	lst2->oix = toix;
	lst2->six = tsix;
}
