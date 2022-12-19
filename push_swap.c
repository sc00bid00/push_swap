/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsordo <lsordo@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 17:02:35 by lsordo            #+#    #+#             */
/*   Updated: 2022/12/19 15:13:47 by lsordo           ###   ########.fr       */
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
		rra(&sta);
		ft_prtstk(sta, stb);
		ft_freearg(&sta);
	}
	return (0);
}
