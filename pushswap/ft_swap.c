/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsordo <lsordo@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 05:10:42 by lsordo            #+#    #+#             */
/*   Updated: 2022/12/13 05:54:50 by lsordo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ft_swap(t_stk *lst1, t_stk *lst2)
{
	int tnum;
	int toix;

	tnum = lst1->num;
	toix = lst1->oix;
	lst1->num = lst2->num;
	lst1->oix = lst2->oix;
	lst2->num = tnum;
	lst2->oix = toix;
}
