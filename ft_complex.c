/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_complex.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsordo <lsordo@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 16:08:34 by lsordo            #+#    #+#             */
/*   Updated: 2022/12/27 16:53:36 by lsordo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_realrun(t_stk **sta, t_stk **stb, t_var *var)
{
	var->prt = 1;
	ft_init(var->argc, var->argv, sta);
	ft_index(sta, var);
	ft_defclt(var);
	ft_pregrp(sta, stb, var);
	ft_restack(sta, stb, var);
}

void	ft_mngh(t_stk **sta, t_stk **stb, t_var *var)
{
	var->clpar = 5;
	while (var->clpar < 15)
	{
		var->scr = 0;
		ft_defclt(var);
		ft_pregrp(sta, stb, var);
		ft_restack(sta, stb, var);
		if (var->scr <= 700)
			break ;
		ft_init(var->argc, var->argv, sta);
		ft_index(sta, var);
		var->clpar++;
	}
	ft_realrun(sta, stb, var);
}

void	ft_mngfh(t_stk **sta, t_stk **stb, t_var *var)
{
	var->clpar = 15;
	while (var->clpar < 25)
	{
		var->scr = 0;
		ft_defclt(var);
		ft_pregrp(sta, stb, var);
		ft_restack(sta, stb, var);
		if (var->scr <= 5500)
			break ;
		ft_freearg(sta);
		ft_freearg(stb);
		sta = NULL;
		stb = NULL;
		ft_init(var->argc, var->argv, sta);
		ft_index(sta, var);
		var->clpar++;
	}
	ft_realrun(sta, stb, var);
}

void	ft_complex(t_stk **sta, t_stk **stb, t_var *var)
{
	if (var->staz < 50)
		var->clpar = 2;
	if (var->staz >=50 && var->staz < 150)
		ft_mngh(sta, stb, var);
	if (var->staz >= 150 && var->staz < 600)
		ft_mngfh(sta, stb, var);
	else
	{
		ft_defclt(var);
		ft_pregrp(sta, stb, var);
		ft_restack(sta, stb, var);
		ft_realrun(sta, stb, var);
	}
}
