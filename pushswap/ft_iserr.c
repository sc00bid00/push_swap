/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iserr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsordo <lsordo@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 15:26:50 by lsordo            #+#    #+#             */
/*   Updated: 2022/12/12 19:34:41 by lsordo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_iserr(char **argv, int n)
{
	int		i;
	int		j;
	char	*s;

	i = 0;
	while (i < n)
	{
		s = argv[i];
		j = 0;
		while (s[j])
		{
			if ((!ft_isdigit(s[j]) && s[j] != '+' && s[j] != '-')
				|| (ft_atoi(s) == 0 && s[0] != '0')
				|| ((ft_atoi(s)) == -1 && s[0] != '-'))
				exit (0);
			j++;
		}
		i++;
	}
	ft_isdouble(argv, n);
}
