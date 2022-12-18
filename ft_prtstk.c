/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prtstk.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsordo <lsordo@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 08:38:20 by lsordo            #+#    #+#             */
/*   Updated: 2022/12/18 17:57:16 by lsordo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_prtstk(t_stk	*arg)
{
	while (arg)
	{
		ft_printf("%d\n", arg->num);
		arg = arg->next;
	}
}
