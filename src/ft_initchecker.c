/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_initchecker.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsordo <lsordo@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 11:58:44 by lsordo            #+#    #+#             */
/*   Updated: 2022/12/29 12:20:18 by lsordo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

static void	ft_abort(char **arr, t_stk **arg)
{
	ft_freear(arr);
	ft_freearg(arg);
	ft_printf("Error\n");
	exit(0);
}

static void	ft_isdble(t_stk *arg)
{
	t_stk	*tmp;
	t_stk	*tmp0;

	tmp0 = arg;
	while (arg)
	{
		tmp = arg;
		while (tmp->next)
		{
			tmp = tmp->next;
			if (arg->num == tmp->num)
			{
				ft_freearg(&tmp0);
				ft_printf("Error\n");
				exit(0);
			}
		}
		arg = arg->next;
	}
}

static void	ft_iserr(int i, char **arr, t_stk **arg)
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
			ft_freear(arr);
			if (arg)
				ft_freearg(arg);
			ft_printf("Error\n");
			exit(0);
		}
		j++;
	}
}

static void	ft_makenw(int j, char **arr, t_stk **arg)
{
	t_stk	*tmp;

	ft_iserr(j, arr, arg);
	if (*arg == NULL)
	{
		*arg = malloc(sizeof(t_stk));
		if (*arg == NULL)
			ft_abort(arr, arg);
		(*arg)->num = ft_atoi(arr[j]);
		(*arg)->next = NULL;
	}
	else
	{
		tmp = *arg;
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = malloc(sizeof(t_stk));
		if (tmp->next == NULL)
			ft_abort(arr, arg);
		tmp->next->num = ft_atoi(arr[j]);
		tmp->next->next = NULL;
	}
}

void	ft_initchecker(int argc, char **argv, t_stk **arg)
{
	int		i;
	char	**arr;
	int		j;

	i = 1;
	while (i < argc)
	{
		arr = ft_split(argv[i], ' ');
		ft_singleinchecker(argc, arr);
		j = 0;
		while (arr[j])
		{
			ft_makenw(j, arr, arg);
			j++;
		}
		i++;
		ft_freear(arr);
	}
	ft_isdble(*arg);
}
