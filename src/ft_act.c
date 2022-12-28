/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_act.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsordo <lsordo@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 13:31:09 by lsordo            #+#    #+#             */
/*   Updated: 2022/12/28 17:21:00 by lsordo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>
#include <get_next_line.h>

void	ft_act(t_stk **sta, t_stk **stb, t_var *var)
{
	if (!ft_strncmp("pa\n", var->cmd, 10))
		pa(sta, stb, var);
	else if (!ft_strncmp("pb\n", var->cmd, 10))
		pb(stb, sta, var);
	else if (!ft_strncmp("sa\n", var->cmd, 10))
		sa(sta, 0, var);
	else if (!ft_strncmp("sb\n", var->cmd, 10))
		sb(stb, 0, var);
	else if (!ft_strncmp("ss\n", var->cmd, 10))
		ss(sta, stb, var);
	else if (!ft_strncmp("ra\n", var->cmd, 10))
		ra(sta, var);
	else if (!ft_strncmp("rb\n", var->cmd, 10))
		rb(stb, var);
	else if (!ft_strncmp("rr\n", var->cmd, 10))
		rr(sta, stb, var);
	else if (!ft_strncmp("rra\n", var->cmd, 10))
		rra(sta, 0, var);
	else if (!ft_strncmp("rrb\n", var->cmd, 10))
		rrb(stb, 0, var);
	else if (!ft_strncmp("rrr\n", var->cmd, 10))
		rrr(sta, stb, var);
	else
		ft_checkfail(sta, stb, var, "Error\n");
}
