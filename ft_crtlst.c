/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_crtlst.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsordo <lsordo@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 21:22:35 by lsordo            #+#    #+#             */
/*   Updated: 2022/12/11 21:37:04 by lsordo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lists.h"

t_list	*ft_crtlst(int	n, char **argv)
{
	t_list	*head;
	t_list	*lst;
	int		i;

	head = malloc(sizeof(t_list));
	if (head == NULL)
		return (NULL);
	i = 1;
	head->oix = i;
	head->six = i;
	head->num = atoi(argv[i]);
	head->next = NULL;
	lst = head;
	i++;
	while (i <= n)
	{
		lst->next = malloc(sizeof(t_list));
		if (lst->next == NULL)
			return (ft_freelst(lst));
		lst = lst->next;
		lst->oix = i;
		lst->six = i;
		lst->num = atoi(argv[i]);
		i++;
	}
	return (head);
}
