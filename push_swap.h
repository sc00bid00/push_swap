/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsordo <lsordo@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 15:11:06 by lsordo            #+#    #+#             */
/*   Updated: 2022/12/16 10:33:29 by lsordo           ###   ########.fr       */
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

#endif
