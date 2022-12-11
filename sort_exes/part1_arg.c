/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   part1_arg.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsordo <lsordo@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 13:22:42 by lsordo            #+#    #+#             */
/*   Updated: 2022/12/09 15:12:06 by lsordo           ###   ########.fr       */
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
	printf("\n%d swap(s)", ctsw);
}

int	main(int argc, char **argv)
{
	int 	i;
	int 	j;
	int		n;
	int		ctsw;
	int		a[MAX];

	if (argc > 1)
	{
		ctsw = 0;
		n = argc - 1;
		i = 0;
		if	(n > MAX + 1)
		{
			printf("Sorry max %d elements\n", MAX);
			return (0);
		}
		while (i < n)
		{
			a[i] = atoi(argv[i + 1]);
			i++;
		}
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
