/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prtstk.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsordo <lsordo@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 08:38:20 by lsordo            #+#    #+#             */
/*   Updated: 2022/12/19 12:58:44 by lsordo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_prtstk(t_stk	*arg)
{
	while (arg)
	{
		ft_printf("%d %d %d\n", arg->oix, arg->six, arg->num);
		arg = arg->next;
	}
}
