/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_defclt.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsordo <lsordo@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 15:54:52 by lsordo            #+#    #+#             */
/*   Updated: 2022/12/19 16:33:22 by lsordo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_defclt(t_var *var)
{
	int	i;

	i = 1;
	while (var->staz / i > 10)
		i++;
	var->clnb = i;
	var->clsz = var->staz / i;
	var->stah = var->staz / var->clnb;
}
