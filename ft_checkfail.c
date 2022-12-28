/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checkfail.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsordo <lsordo@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 13:25:05 by lsordo            #+#    #+#             */
/*   Updated: 2022/12/28 14:04:52 by lsordo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "get_next_line.h"

void	ft_checkfail(t_stk **sta, t_stk **stb, t_var *var)
{
	ft_printf("KO");
	ft_freearg(sta);
	ft_freearg(stb);
	free(var->cmd);
	free(var);
	exit(0);
}
