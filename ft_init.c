/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsordo <lsordo@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 17:03:17 by lsordo            #+#    #+#             */
/*   Updated: 2022/12/18 17:50:18 by lsordo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"



t_stk	*ft_makenw(char *s)
{
	t_stk	*tmp;

	tmp = malloc(sizeof(t_stk));
	if (tmp != NULL && !ft_iserr(s))
	{
		tmp->arg = s;
		tmp->next = NULL;
	}
	else
		exit(0);
	return (tmp);
}

void	ft_init(int argc, char **argv, t_stk **arg)
{
	int		i;
	t_stk	*tmp;
	char	**arr;
	int		j;

	i = 1;
	tmp = *arg;
	while (i < argc)
	{
		arr = ft_split(argv[i], ' ');
		j = 0;
		while (arr[j])
		{
			if (tmp == NULL)
			{
				tmp = ft_makenw(arr[j]);
				*arg = tmp;
			}
			else
			{
				tmp->next = ft_makenw(arr[j]);
				tmp = tmp->next;
			}
			j++;
		}
		i++;
	}
}
