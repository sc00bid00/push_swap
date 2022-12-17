/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsordo <lsordo@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 15:11:06 by lsordo            #+#    #+#             */
/*   Updated: 2022/12/17 08:40:25 by lsordo           ###   ########.fr       */
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
	char			*arg;
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

void	ft_stkaddback(t_stk **stk, t_stk *new);
t_stk	*ft_stklast(t_stk *stk);
t_stk	*ft_stknew(char *s);
void	ft_prtstk(t_stk	*arg);

#endif
