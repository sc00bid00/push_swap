/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swapx.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsordo <lsordo@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 13:28:08 by lsordo            #+#    #+#             */
/*   Updated: 2022/12/19 13:28:39 by lsordo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_swapx(t_stk *tmp1, t_stk *tmp2)
{
	int	tmpn;
	int	tmpo;
	int	tmps;

	tmpn = tmp1->num;
	tmpo = tmp1->oix;
	tmps = tmp1->six;
	tmp1->num = tmp2->num;
	tmp1->oix = tmp2->oix;
	tmp2->num = tmpn;
	tmp2->oix = tmpo;
}
