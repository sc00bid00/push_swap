/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swapidx.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsordo <lsordo@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 21:59:13 by lsordo            #+#    #+#             */
/*   Updated: 2022/12/11 22:00:01 by lsordo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lists.h"
void	ft_swapidx(t_list *lst1, t_list *lst2)
{
	int		tmp_num;
	int		tmp_oix;
	int		tmp_six;


	tmp_num = lst1->num;
	tmp_oix = lst1->oix;
	tmp_six = lst1->six;
	lst1->num = lst2->num;
	lst1->oix = lst2->oix;
	lst1->six = lst2->six;
	lst2->num = tmp_num;
	lst2->oix = tmp_oix;
	lst2->six = tmp_six;
}
