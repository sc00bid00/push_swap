/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_defclt.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsordo <lsordo@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 15:54:52 by lsordo            #+#    #+#             */
/*   Updated: 2022/12/19 18:22:10 by lsordo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_defclt(t_var *var)
{
	int	i;

	var->clpr = 10;
	i = 1;
	while (var->staz / i > var->clpr)
		i++;
	var->clnb = i;
	var->clsz = var->staz / i;
}
