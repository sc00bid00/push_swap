/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prtlst.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsordo <lsordo@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 18:30:58 by lsordo            #+#    #+#             */
/*   Updated: 2022/12/12 10:29:08 by lsordo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lists.h"

void	ft_prtlst(t_list *lst)
{
	t_list	*tmp;

	tmp = lst;
	printf("orgnl\tsrted\tnumbr\n");
	printf("-----\t-----\t-----\n");
	while (tmp)
	{
		printf("%d\t%d\t%d\n", tmp->oix, tmp->six, tmp->num);
		tmp = tmp->next;
	}
	printf("\n");
}
