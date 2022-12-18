/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsordo <lsordo@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 17:03:17 by lsordo            #+#    #+#             */
/*   Updated: 2022/12/18 22:30:19 by lsordo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_abort(char **arr, t_stk **arg)
{
	ft_freear(arr);
	ft_freearg(arg);
	ft_printf("Error\n");
	exit(0);
}

int		ft_isdble(t_stk *arg)
{
	t_stk	*tmp;

	while (arg)
	{
		tmp = arg;
		while (tmp->next)
		{
			tmp = tmp->next;
			if (arg->num == tmp->num)
				return(1);
		}
		arg = arg->next;
	}
	return (0);
}

int		ft_iserr(char *s)
{
	int	j;

	j = 0;
		while (s[j])
		{
			if ((!ft_isdigit(s[j]) && s[j] != '+' && s[j] != '-')
				|| (ft_atoi(s) == 0 && s[0] != '0')
				|| ((ft_atoi(s)) == -1 && s[0] != '-'))
				return (1);
			j++;
		}
		return (0);
}

void	ft_makenw(int j, char **arr, t_stk **arg)
{
	t_stk	*tmp;

	if (ft_iserr(arr[j]))
		ft_abort(arr, arg);
	if (*arg == NULL)
	{
		*arg = malloc(sizeof(t_stk));
		if (*arg == NULL)
			ft_abort(arr, arg);
		(*arg)->num = ft_atoi(arr[j]);
		(*arg)->next = NULL;
	}
	else
	{	tmp = *arg;
		while(tmp->next)
			tmp = tmp->next;
		tmp->next=malloc(sizeof(t_stk));
		if (tmp->next == NULL)
			ft_abort(arr, arg);
		tmp->next->num=ft_atoi(arr[j]);
		tmp->next->next = NULL;
	}
}

void	ft_init(int argc, char **argv, t_stk **arg)
{
	int		i;
	char	**arr;
	int		j;

	i = 1;
	while (i < argc)
	{
		arr = ft_split(argv[i], ' ');
		j = 0;
		while (arr[j])
		{
			ft_makenw(j, arr, arg);
			j++;
		}
		i++;
		ft_freear(arr);
	}
	if (ft_isdble(*arg))
		ft_abort(arr, arg);

}
