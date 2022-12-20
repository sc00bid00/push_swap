/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsordo <lsordo@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 15:11:06 by lsordo            #+#    #+#             */
/*   Updated: 2022/12/20 11:25:59 by lsordo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <stdlib.h>
# include "./libft/libft.h"

typedef struct s_stk
{
	int				num;
	int				oix;
	int				six;
	struct s_stk	*next;
}					t_stk;

typedef struct s_var
{
	int		staz;
	int		stbz;
	int		clpr;
	int		clnb;
	int		clsz;
	int		cl1f;
	int		cl1t;
	int		cl2t;
	int		cpst;
	int		msg;
}			t_var;

void	ft_prtstk(t_stk	*sta, t_stk *stb);
void	ft_init(int argc, char **argv, t_stk **arg);
void	ft_freear(char **arr);
void	ft_freearg(t_stk **arg);
void	ft_index(t_stk **stk, t_var *var);
void	pa(t_stk **sta, t_stk **stb);
void	pb(t_stk **stb, t_stk **sta);
void	sa(t_stk **stk);
void	sb(t_stk **stk);
void	ss(t_stk **sta, t_stk **stb);
void	ra(t_stk **sta);
void	rb(t_stk **stb);
void	rra(t_stk **sta, int msg);
void	rrb(t_stk **stb, int msg);
void	rrr(t_stk **sta, t_stk **stb);
void	ft_defclt(t_var *var);
void	ft_pregrp(t_stk **sta, t_stk **stb, t_var *var);
void	ft_idntt(t_stk **sta, t_var *var);
int		ft_stksize(t_stk *stk, t_var *var);
int		ft_isnstk(t_stk *stk, int from, int to);
int		ft_findfirst(t_stk *stk, int from, int to);
int		ft_findlast(t_stk *stk, int from, int to);

#endif
