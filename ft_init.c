/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsordo <lsordo@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 13:25:55 by lsordo            #+#    #+#             */
/*   Updated: 2022/12/15 20:33:31 by lsordo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_init(t_stk **stka, char **argv, int n)
{
	ft_iserr(argv, n);
	*stka = ft_newstk();
	ft_addstk(stka, argv, n);
	ft_idxstk(stka, ft_cmp);

}
