/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsordo <lsordo@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 15:52:24 by lsordo            #+#    #+#             */
/*   Updated: 2022/12/28 17:17:57 by lsordo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<libft.h>

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst && lst->content && del)
	{
		del(lst->content);
		free(lst);
	}
}
