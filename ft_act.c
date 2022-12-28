/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_act.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsordo <lsordo@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 13:31:09 by lsordo            #+#    #+#             */
/*   Updated: 2022/12/28 13:45:25 by lsordo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "get_next_line.h"
#include "./libft/libft.h"

void	ft_act(t_stk **sta, t_stk **stb, t_var *var)
{
	if (!ft_strncmp("pa", var->cmd, 2))
		pa(sta, stb, var);
	else if (!ft_strncmp("pb", var->cmd, 2))
		pb(sta, stb, var);
	else if (!ft_strncmp("sa", var->cmd, 2))
		sa(sta, 0, var);
	else if (!ft_strncmp("sb", var->cmd, 2))
		sb(stb, 0, var);
	else if (!ft_strncmp("ss", var->cmd, 2))
		ss(sta, stb, var);
	else if (!ft_strncmp("ra", var->cmd, 2))
		ra(sta, var);
	else if (!ft_strncmp("rb", var->cmd, 2))
		rb(stb, var);
	else if (!ft_strncmp("rr", var->cmd, 2))
		rr(sta, stb, var);
	else if (!ft_strncmp("rra", var->cmd, 3))
		rra(sta, 0, var);
	else if (!ft_strncmp("rrb", var->cmd, 3))
		rrb(stb, 0, var);
	else if (!ft_strncmp("rrr", var->cmd, 3))
		rrr(sta, stb, var);
	else
		ft_checkfail(sta, stb, var);
}
