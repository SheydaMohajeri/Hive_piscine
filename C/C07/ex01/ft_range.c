/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smohajer <smohajer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 11:10:14 by smohajer          #+#    #+#             */
/*   Updated: 2024/09/26 14:09:26 by smohajer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	j;
	int	*range;

	if (min >= max)
		return (NULL);
	range = (int *)malloc((max - min) * sizeof(int));
	j = 0;
	while (j < (max - min))
	{
		range[j] = min + j;
		j++;
	}
	return (range);
}
/*
int	main()
{
	int	*z;
	int	i;
	int	max;
	int	min;

	i = 0;
	printf("input min:");
	scanf("%d", &min);
	printf("input max:");
	scanf("%d", &max);
	z = ft_range(min, max);
	while (i < (max - min))
	{
		printf("%d ", z[i]);
		i++;
	}
	printf("\n");
	free(z);
	return (0);
}
*/
