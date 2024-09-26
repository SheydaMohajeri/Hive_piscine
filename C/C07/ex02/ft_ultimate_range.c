/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smohajer <smohajer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 11:10:14 by smohajer          #+#    #+#             */
/*   Updated: 2024/09/26 16:32:56 by smohajer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*array;
	int	size;
	int	j;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	size = max - min;
	array = (int *)malloc(size * sizeof(int));
	if (array == NULL)
	{
		*range = NULL;
		return (-1);
	}
	j = 0;
	while (j < size)
	{
		array[j] = min + j;
		j++;
	}
	*range = array;
	return (size);
}
/*int	main()
{
	int	*range;
	int	size;
	int	min;
	int	max;

	printf("Input min:");
	scanf("%d", &min);
	printf("Input max:");
	scanf("%d", &max);
	printf("min: %d\n", min);
	printf("max: %d\n", max);
	size = ft_ultimate_range(&range,min,max);
	printf("size: %d\n", size);
	if (size > 0)
	{
		for (int i = 0; i < size; i++)
		{
			printf("%d ", range[i]);
		}
		printf("\n");
		free(range);
	}
	else if (size == 0)
		printf("Error: invalid: min >= max\n");
	else
		printf("memory failed, %d\n", size);
	return (0);
}*/
