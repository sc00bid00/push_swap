/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsordo <lsordo@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 20:34:18 by lsordo            #+#    #+#             */
/*   Updated: 2022/12/11 21:43:45 by lsordo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lists.h"
void	ft_swap(t_list *lst1, t_list *lst2)
{
	int		tmp_num;
	int		tmp_oix;

	tmp_num = lst1->num;
	tmp_oix = lst1->oix;
	lst1->num = lst2->num;
	lst1->oix = lst2->oix;
	lst2->num = tmp_num;
	lst2->oix = tmp_oix;
}
