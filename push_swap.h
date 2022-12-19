/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsordo <lsordo@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 15:11:06 by lsordo            #+#    #+#             */
/*   Updated: 2022/12/19 14:49:11 by lsordo           ###   ########.fr       */
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
	int		i;
	int		j;
	int		size;
	int		imax;
	int		imin;
}			t_var;

void	ft_prtstk(t_stk	*sta, t_stk *stb);
void	ft_init(int argc, char **argv, t_stk **arg);
void	ft_freear(char **arr);
void 	ft_freearg(t_stk **arg);
void	ft_index(t_stk **stk);
void	pa(t_stk **sta, t_stk **stb);
void	pb(t_stk **sta, t_stk **stb);
void	sa(t_stk **sta);

#endif
