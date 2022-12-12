/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_addstk.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsordo <lsordo@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 19:07:41 by lsordo            #+#    #+#             */
/*   Updated: 2022/12/12 19:20:45 by lsordo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_addstk(t_stk **lst, char **argv, int n)
{
	t_stk	*tmp;
	int		i;

	tmp = *lst;
	i = 0;
	while (i < n)
	{
		tmp->num = ft_atoi(argv[i]);
		tmp->oix = i;
		tmp->six = i;
		if (i == n - 1)
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
