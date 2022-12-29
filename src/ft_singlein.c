/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_singlein.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsordo <lsordo@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 09:35:42 by lsordo            #+#    #+#             */
/*   Updated: 2022/12/29 08:51:24 by lsordo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

void	ft_errsing(int i, char **arr)
{
	char	*s;
	int		j;

	s = arr[i];
	j = 0;
	while (s[j])
	{
		if ((!ft_isdigit(s[j]) && s[j] != '+' && s[j] != '-')
			|| (ft_atoi(s) == 0 && s[0] != '0')
			|| (ft_atoi(s) < 0 && s[0] != '-')
			|| (ft_atoi(s) > 0 && s[0] == '-'))
		{
			ft_printf("Error\n");
			break ;
		}
		j++;
	}
}

void	ft_singlein(int argc, char **arr)
{
	int	i;

	i = 0;
	while (arr[i])
		i++;
	if (i == 1 && argc == 2)
	{
		ft_errsing(--i, arr);
		ft_freear(arr);
		exit(0);
	}
}
