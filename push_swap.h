/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsordo <lsordo@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 15:11:06 by lsordo            #+#    #+#             */
/*   Updated: 2022/12/16 08:48:18 by lsordo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <stdlib.h>
# include "./libft/libft.h"
# include "./ft_printf/ft_printf.h"

typedef struct s_stk
{
	int				num;
	int				oix;
	int				six;
	struct s_stk	*next;
}					t_stk;

void	ft_iserr(char **argv, int n);
void	ft_prtstk(t_stk *stka, t_stk *stkb);
void	ft_freall(t_stk *lst);
void	ft_addstk(t_stk **lst, char **argv, int n);
t_stk	*ft_newstk(void);
void	ft_isdble(char **argv, int n);
void	ft_idxstk(t_stk **stk, int (*ft_cmp)(int, int));
void	ft_swap(t_stk *lst1, t_stk *lst2);
void	ft_swapx(t_stk *lst1, t_stk *lst2);
int		ft_cmp(int a, int b);
void	ft_px(t_stk **src, t_stk **dst);
int		ft_stksize(t_stk *stk);
void	ft_sx(t_stk **src);
void	ft_rx(t_stk **stk, int n);
void	ft_rrx(t_stk **stk, int n);
void	ft_pstkid(t_stk *stk);
void	ft_init(t_stk **stka, char **argv, int n);
int		ft_cost(t_stk *stk, int p);
t_stk	*ft_slast(t_stk *stk);
int		ft_abs(int	n);
int		ft_cost(t_stk *stk, int p);
int		ft_isinst(t_stk *stk, int ix);
void	ft_pullcl(t_stk **src, t_stk **dst, int	*start, int *end);
int		ft_rots(t_stk *stk, int *start, int *end);
int		ft_rrots(t_stk *stk, int *start, int *end);
void	ft_putcl(t_stk **src, t_stk **dst);
int		ft_ismax(int n, t_stk *stk);
int		ft_ismin(int n, t_stk *stk);
int		ft_rottsml(int n, t_stk *stk);
int		ft_cntarr(char **arr);
int		ft_maxstk(t_stk *stk);
int		ft_minstk(t_stk *stk);
int		ft_midstk(int x, t_stk *stk);
int		ft_maxind(t_stk *stk);
int		ft_minind(t_stk *stk);
void	ft_maxhead(t_stk **stk);

#endif
