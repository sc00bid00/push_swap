/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sel_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsordo <lsordo@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 14:11:22 by lsordo            #+#    #+#             */
/*   Updated: 2022/12/09 15:33:49 by lsordo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	display(int *arr, int n)
{
	int		i;

	i = 0;
	while (i < n)
	{
		printf("%d ", arr[i]);
		i++;
	}
	printf("\n");
}

void	ft_swap(int *arr, int x, int y)
{
	int	tmp;

	tmp = arr[x];
	arr[x] = arr[y];
	arr[y] = tmp;
}

int		locof_smallest(int *arr, int s, int e)
{
	int		i;
	int		j;

	i = s;
	j = i;
	while (i <= e)
	{
		if(arr[i] < arr[j])
			j = i;
		i++;
	}
	return (j);
}

void	sel_sort(int *arr, int n)
{
	int		i;
	int		j;

	i = 0;
	while (i < n - 1)
	{
		j = locof_smallest(arr, i, n - 1);
		ft_swap(arr, i, j);
		i++;
	}
}

int main(void)
{
	int arr[] = {102, 12, 193, 1932, 192, 11, 293, 39, 239};
	int size;

	size = sizeof(arr)/sizeof(int);
	display(arr, size);
	sel_sort(arr, size);
	display(arr, size);
	return (0);
}
