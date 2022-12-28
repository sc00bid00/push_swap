/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_singlein.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsordo <lsordo@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 09:35:42 by lsordo            #+#    #+#             */
/*   Updated: 2022/12/28 10:12:20 by lsordo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_singlein(int argc, char **arr)
{
	int	i;

	i = 0;
	while (arr[i])
		i++;
	if (i == 1 && argc == 2)
	{
		ft_freear(arr);
		exit(0);
	}
}
