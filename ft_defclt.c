/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_defclt.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsordo <lsordo@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 15:54:52 by lsordo            #+#    #+#             */
/*   Updated: 2022/12/22 17:44:19 by lsordo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_defclt(t_var *var)
{
	if (var->staz > 0 && var->staz < 50)
		var->clpar = 2;
	else if (var->staz >= 50 && var->staz < 500)
		var->clpar = 7;
	else if (var->staz >= 500 && var->staz <= 1000)
		var->clpar = 17;
	else
		var->clpar = 100;
	var->clsize = var->staz / var->clpar;
	var->clnum = var->staz / var->clsize;
}
