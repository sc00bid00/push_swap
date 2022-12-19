/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsordo <lsordo@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 17:02:35 by lsordo            #+#    #+#             */
/*   Updated: 2022/12/19 14:41:29 by lsordo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int argc, char **argv)
{
	t_stk 	*sta;
	t_stk	*stb;

	if (argc > 1)
	{
		sta = NULL;
		stb = NULL;
		ft_init(argc, argv, &sta);
		ft_index(&sta);
		ft_prtstk(sta, stb);
		pa(&sta, &stb);
		pa(&sta, &stb);
		pa(&sta, &stb);
		pa(&sta, &stb);
		pa(&sta, &stb);
		ft_prtstk(sta, stb);
		pb(&stb, &sta);
		pb(&stb, &sta);
		pb(&stb, &sta);
		ft_prtstk(sta, stb);
		ft_freearg(&sta);
	}
	return (0);
}
