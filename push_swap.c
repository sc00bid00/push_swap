/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsordo <lsordo@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 16:54:29 by lsordo            #+#    #+#             */
/*   Updated: 2022/12/10 17:08:10 by lsordo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	int		i;
	int		n;
	int		size;
	t_list	*lst;
	t_list	*tmp;

	if	(argc > 1)
	{
		n = argc - 1;
		lst = ft_lstnew(ft_atoi(argv[1]), 0);
		tmp = lst;
		i = 1;
		while (i < n)
		{
			ft_lstaddnxt(tmp, ft_atoi(argv[i + 1]), i);
			i++;
		}
		size = ft_lstsize(lst);
		printf("List with %d nodes has been created\n", ft_lstsize(lst));
		ft_prtlst(lst);
	}
	else
		printf("At least 1 argument needed to create a list\n");
	return (0);
}
