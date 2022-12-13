/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_addstk.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsordo <lsordo@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 19:07:41 by lsordo            #+#    #+#             */
/*   Updated: 2022/12/13 15:50:07 by lsordo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
// setup stack a: adds a node and idexes it
void	ft_addstk(t_stk **lst, char **argv, int n)
{
	t_stk	*tmp;
	int		i;

	tmp = *lst;
	i = 1;
	while (i <= n)
	{
		tmp->num = ft_atoi(argv[i - 1]);
		tmp->oix = i;
		tmp->six = n - i + 1;
		if (i == n)
			tmp->next = NULL;
		else
		{
			tmp->next = malloc(sizeof(t_stk));
			if (!tmp->next)
				ft_freall(*lst);
			tmp = tmp->next;
		}
		i++;
	}
}
