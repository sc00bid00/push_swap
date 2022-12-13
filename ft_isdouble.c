/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdouble.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsordo <lsordo@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 19:21:43 by lsordo            #+#    #+#             */
/*   Updated: 2022/12/13 12:04:15 by lsordo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
// exits teh program if double numbers found in the arguments
void	ft_isdouble(char **argv, int n)
{
	int		i;
	int		j;

	i = 0;
	while (i < n)
	{
		j = i + 1;
		while (j < n)
		{
			if (ft_atoi(argv[i]) == ft_atoi(argv[j]))
				exit(0);
			j++;
		}
		i++;
	}
}
