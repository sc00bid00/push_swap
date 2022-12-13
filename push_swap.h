/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsordo <lsordo@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 15:11:06 by lsordo            #+#    #+#             */
/*   Updated: 2022/12/13 15:42:54 by lsordo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <stdlib.h>
# include "./libft/libft.h"
# include "./ft_printf/ft_printf.h"

typedef struct		s_stk
{
	int				num;
	int				oix;
	int				six;
	struct s_stk	*next;
}					t_stk;

void	ft_iserr(char **argv, int n);
void	ft_prtlst(t_stk *lst);
void	ft_freall(t_stk *lst);
void	ft_addstk(t_stk **lst, char **argv, int n);
t_stk	*ft_newstk(void);
void	ft_isdouble(char **argv, int n);
void	ft_idxstk(t_stk **stk, int (*ft_cmp)(int, int));
void	ft_swap(t_stk *lst1, t_stk *lst2);
void	ft_swapx(t_stk *lst1, t_stk *lst2);
int		ft_cmp(int a, int b);
void	ft_pb(t_stk **stka, t_stk **stkb);
void	ft_pa(t_stk **stka, t_stk **stkb);
int		ft_stksize(t_stk *stk);

#endif
