/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lists.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsordo <lsordo@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 18:06:13 by lsordo            #+#    #+#             */
/*   Updated: 2022/12/11 21:58:04 by lsordo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lists.h"

int	main(int argc, char **argv)
{
	int		n;
	t_list	*lst;

	if (argc > 1)
	{
		n = argc - 1;
		lst = ft_crtlst(n, argv);
		ft_prtlst(lst);
		lst = ft_srtlstnum(lst, ft_cmp);
		ft_prtlst(lst);
		lst = ft_srtlstidx(lst, ft_cmp);
		ft_prtlst(lst);
	}
	return (0);
}
