/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_defclt.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsordo <lsordo@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 15:54:52 by lsordo            #+#    #+#             */
/*   Updated: 2022/12/27 16:17:08 by lsordo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_defclt(t_var *var)
{
	if (var->staz >= 600)
		var->clpar = 25;
	var->clsize = var->staz / var->clpar;
	var->clnum = var->staz / var->clsize;
}
