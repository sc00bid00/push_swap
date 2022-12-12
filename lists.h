/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lists.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsordo <lsordo@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 18:09:56 by lsordo            #+#    #+#             */
/*   Updated: 2022/12/12 18:45:17 by lsordo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LISTS_H
# define LISTS_H
# include <stdlib.h>
# include <stdio.h>

typedef struct		s_list
{
	int				num;
	int				oix;
	int				six;
	struct s_list	*next;
}					t_list;

void	ft_prtlst(t_list *lst);
t_list	*ft_freelst(t_list *lst);
void	ft_swap(t_list *lst1, t_list *lst2);
t_list	*ft_srtlstnum(t_list* lst, int (*ft_cmp)(int, int));
int		ft_cmp(int a, int b);
t_list	*ft_crtlst(int	n, char **argv);
t_list	*ft_srtlstidx(t_list* lst, int (*ft_cmp)(int, int));
void	ft_swapidx(t_list *lst1, t_list *lst2);
#endif

