/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsordo <lsordo@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 09:02:05 by lsordo            #+#    #+#             */
/*   Updated: 2022/12/10 17:11:06 by lsordo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct		s_list
{
	int				*num;
	int				*oix;
	int				*six;
	struct s_list	*next;
}					t_list;

t_list	*ft_lstnew(int *num, int *oix);
t_list	*ft_lstaddnxt(t_list *head, int *num, int *oix);
int		ft_lstsize(t_list *lst);
int		ft_atoi(const char *str);
void	ft_prtlst(t_list *lst);

#endif
