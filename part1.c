/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   part1.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsordo <lsordo@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 13:22:42 by lsordo            #+#    #+#             */
/*   Updated: 2022/12/09 14:07:58 by lsordo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#define MAX 100

void	ft_swap(int	*arr, int i, int j)
{
	int	tmp;

	tmp = arr[i];
	arr[i] = arr[j];
	arr[j] = tmp;
}

void	ft_prtout(int *arr, int n, int ctsw)
{
	int	i;

	i = 0;
	while (i < n)
	{
		printf("%d ", arr[i]);
		i++;
	}
	if(ctsw > 0)
		printf("\n%d number(s), %d swap(s)", n, ctsw);
	printf("\n");
}

int	main(int argc, char **argv)
{
	int 	i;
	int 	j;
	int		n;
	int		ctsw;
	int		a[MAX];

	if (argc == 2)
	{
		ctsw = 0;
		n = atoi(argv[1]);
		i = 0;
		if	(n > MAX)
		{
			printf("Sorry max %d elements\n", MAX);
			return (0);
		}
		while (i < n)
		{
			a[i] = rand();
			i++;
		}
		ft_prtout(a, n, -1);
		i = 0;
		while (i < n - 1)
		{
			j = i + 1;
			while(j < n)
			{
				if(a[i] > a[j])
				{
					ft_swap(a, i, j);
					ctsw++;
				}
				j++;
			}
			i++;
		}
		ft_prtout(a, n, ctsw);
	}
	else
		printf("Nothing entered\n");
	return (0);
}
