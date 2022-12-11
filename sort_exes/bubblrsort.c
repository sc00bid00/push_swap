/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bubblrsort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsordo <lsordo@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 15:21:03 by lsordo            #+#    #+#             */
/*   Updated: 2022/12/09 15:33:27 by lsordo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	display(int *arr, int size)
{
	int		i;

	i = 0;
	while (i < size)
	{
		printf("%d ", arr[i]);
		i++;
	}
	printf("\n");
}

void	swap(int *arr, int x, int y)
{
	int tmp;

	tmp = arr[x];
	arr[x] = arr[y];
	arr[y] = tmp;
}

void	bubble(int *arr, int n)
{
	int	i;

	i = n - 1;
	while (i > 0)
	{
		if (arr[i] < arr[i  - 1])
			swap(arr, i, i - 1);
		i--;
	}
}

void	bbl_sort(int *arr, int n)
{
	int		i;

	i = 0;
	while (i < n  - 1)
	{
		bubble(arr, n);
		i++;
	}
}

int	main(void)
{
	int size;

	int arr[] = {102, 293, 1939, 1832, 11, 28, 344, 95343};
	size =sizeof(arr)/ sizeof(int);
	display(arr, size);
	bbl_sort(arr, size);
	display(arr, size);
	return (0);
}
