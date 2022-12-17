/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsordo <lsordo@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 07:49:45 by lsordo            #+#    #+#             */
/*   Updated: 2022/12/17 08:56:10 by lsordo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_free(char **arr)
{
	int	i;

	i = 0;
	while (arr[i])
	{
		free(arr[i]);
		i++;
	}
	free(arr);
}


void	ft_init(int argc, char **argv, t_stk **arg)
{
	int		i;
	int		j;
	char	**arr;
	t_stk	*new;

	i = 1;
	while (i < argc)
	{
		arr = ft_split(argv[i], ' ');
		j = 0;
		while (arr[j])
		{
			new = ft_stknew(arr[j]);
			ft_stkaddback(arg, new);
			j++;
		}
		ft_free(arr);
		i++;
	}
}


int	main(int argc, char **argv)
{
	t_stk	*arg;

	if (argc > 1)
	{
		arg = ft_stknew("");
		if (!arg)
			return (0);
		ft_init(argc, argv, &arg);
	}
	ft_prtstk(arg);
	return (0);
}
