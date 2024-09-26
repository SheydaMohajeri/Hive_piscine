/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smohajer <smohajer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 11:10:14 by smohajer          #+#    #+#             */
/*   Updated: 2024/09/26 17:14:53 by smohajer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>

int	ft_strlen(char *str)
{
	int	l;

	l = 0;
	while (str[l] != '\0')
		l++;
	return (l);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	get_total_str(int size, char **strs, char *sep)
{
	int	i;
	int	total_l;
	int	sep_l;

	i = 0;
	total_l = 0;
	sep_l = ft_strlen(sep);
	while (i < size)
	{
		total_l += ft_strlen(strs[i]);
		if (i < size - 1)
			total_l += sep_l;
		i++;
	}
	return (total_l);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		total;
	char	*result;

	i = 0;
	total = get_total_str(size, strs, sep);
	result = (char *)malloc((total + 1) * sizeof(char));
	if (result == NULL)
		return (NULL);
	result[0] = '\0';
	while (i < size)
	{
		ft_strcat(result, strs[i]);
		if (i < size - 1)
			ft_strcat(result, sep);
		i++;
	}
	result[total] = '\0';
	return (result);
}
/*
int	main()
{
	char *strs[] = {"Hello", "world", "!"};
	char *sep = ", ";
	char *result = ft_strjoin(3, strs, sep);

	if (result != NULL)
	{
		printf("%s\n", result);
		free(result);
	}
	else
		printf("memory failed\n");
	return (0);
}*/
