/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stknew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsordo <lsordo@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 08:18:28 by lsordo            #+#    #+#             */
/*   Updated: 2022/12/17 09:16:52 by lsordo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stk	*ft_stknew(char *s)
{
	t_stk	*tmp;

	tmp = malloc(sizeof(t_stk));
	if(!tmp)
		return (NULL);
	else
	{
		tmp->arg = s;
		tmp->next = NULL;
	}
	ft_printf("%s\n", tmp->arg);
	return (tmp);
}
