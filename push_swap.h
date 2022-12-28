/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsordo <lsordo@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 15:11:06 by lsordo            #+#    #+#             */
/*   Updated: 2022/12/28 13:47:45 by lsordo           ###   ########.fr       */
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
	int		clpar;
	int		clnum;
	int		clsize;
	int		clstart;
	int		clend;
	int		clmid;
	int		min;
	int		minp;
	int		maxn;
	int		maxn2;
	int		maxn3;
	int		maxp;
	int		cllr;
	int		scr;
	int		prt;
	int		argc;
	char	**argv;
	char	*cmd;
}			t_var;

void	ft_prtstk(t_stk	*sta, t_stk *stb);
void	ft_init(int argc, char **argv, t_stk **arg);
void	ft_freear(char **arr);
void	ft_freearg(t_stk **arg);
void	ft_index(t_stk **stk, t_var *var);
void	pa(t_stk **sta, t_stk **stb, t_var *var);
void	pb(t_stk **stb, t_stk **sta, t_var *var);
void	sa(t_stk **stk, int msg, t_var *var);
void	sb(t_stk **stk, int msg, t_var *var);
void	ss(t_stk **sta, t_stk **stb, t_var *var);
void	ra(t_stk **sta, t_var *var);
void	rb(t_stk **stb, t_var *var);
void	rr(t_stk **sta, t_stk **stb, t_var *var);
void	rra(t_stk **sta, int msg, t_var *var);
void	rrb(t_stk **stb, int msg, t_var *var);
void	rrr(t_stk **sta, t_stk **stb, t_var *var);
void	ft_defclt(t_var *var);
void	ft_pregrp(t_stk **sta, t_stk **stb, t_var *var);
void	ft_idntt(t_stk **sta, t_var *var);
int		ft_stksize(t_stk *stk, t_var *var);
int		ft_isnstk(t_stk *stk, t_var	*var);
int		ft_findfirst(t_stk *stk, t_var *var);
int		ft_findlast(t_stk *stk, t_var *var);
void	ft_restack(t_stk **sta, t_stk **stb, t_var *var);
void	ft_simple(t_stk **sta, t_stk **stb, t_var *var);
void	ft_getmaxv(t_stk *stk, t_var *var);
void	ft_complex(t_stk **sta, t_stk **stb, t_var *var);
void	ft_reset(t_stk **sta, t_stk **stb, t_var *var);
void	ft_singlein(int argc, char **arr);
int		ft_sorted(t_stk	*stk);
void	ft_checkfail(t_stk **sta, t_stk **stb, t_var *var);
void	ft_act(t_stk **sta, t_stk **stb, t_var *var);
void	ft_getcmds(t_stk **sta, t_stk **stb, t_var *var);

#endif
