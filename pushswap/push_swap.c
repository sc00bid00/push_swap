/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsordo <lsordo@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 15:17:43 by lsordo            #+#    #+#             */
/*   Updated: 2022/12/12 18:58:25 by lsordo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stk	*stka;

	if (argc > 2)
	{
		ft_iserr(&argv[1], argc - 1);
		stka = ft_crtstk(&argv[1], argc - 1);
	}
	return (0);
}

// create indexed list
// sort, index sorted, return to original
// push swap print ops

