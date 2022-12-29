/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_index.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsordo <lsordo@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 12:36:30 by lsordo            #+#    #+#             */
/*   Updated: 2022/12/29 08:36:36 by lsordo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

void	ft_swap(t_stk *tmp1, t_stk *tmp2)
{
	int	tmpn;
	int	tmpo;
	int	tmps;

	tmpn = tmp1->num;
	tmpo = tmp1->oix;
	tmps = tmp1->six;
	tmp1->num = tmp2->num;
	tmp1->oix = tmp2->oix;
	tmp1->six = tmp2->six;
	tmp2->num = tmpn;
	tmp2->oix = tmpo;
	tmp2->six = tmps;
}

void	ft_swapbk(t_stk	**stk)
{
	t_stk	*tmp0;
	t_stk	*tmp;

	tmp0 = *stk;
	while (tmp0)
	{
		if (tmp0->next)
			tmp = tmp0->next;
		while (tmp)
		{
			if (tmp0->oix > tmp->oix)
				ft_swap(tmp0, tmp);
			tmp = tmp->next;
		}
		tmp0 = tmp0->next;
	}
}

void	ft_srtd(t_stk **stk)
{
	int		i;
	t_stk	*tmp;

	tmp = *stk;
	i = 0;
	while (tmp)
	{
		tmp->six = i;
		tmp = tmp->next;
		i++;
	}
	tmp = *stk;
}

void	ft_ntrl(t_stk **stk, t_var *var)
{
	int		i;
	t_stk	*tmp;

	tmp = *stk;
	i = 0;
	while (tmp)
	{
		tmp->oix = i;
		tmp->six = i;
		tmp = tmp->next;
		i++;
	}
	var->staz = i;
}

void	ft_index(t_stk **stk, t_var *var)
{
	t_stk	*tmp;
	t_stk	*tmp0;

	ft_ntrl(stk, var);
	tmp0 = *stk;
	while (tmp0)
	{
		if (tmp0->next)
			tmp = tmp0->next;
		while (tmp)
		{
			if (tmp->num < tmp0->num)
				ft_swap(tmp, tmp0);
			tmp = tmp->next;
		}
		tmp0 = tmp0->next;
	}
	ft_srtd(stk);
	ft_swapbk(stk);
}
