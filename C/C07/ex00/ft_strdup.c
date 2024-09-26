/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smohajer <smohajer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 11:10:14 by smohajer          #+#    #+#             */
/*   Updated: 2024/09/26 14:03:57 by smohajer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include<stdio.h>

int	ft_strlen(char *src)
{
	int	length;

	length = 0;
	while (src[length] != '\0')
		length++;
	return (length);
}

char	*ft_strdup(char *src)
{
	char	*dup;
	int		length;
	int		i;

	length = ft_strlen(src);
	dup = (char *)malloc((length + 1) * sizeof(char));
	if (dup == NULL)
		return (NULL);
	i = 0;
	while (i < length)
	{
		dup[i] = src[i];
		i++;
	}
	dup[length] = '\0';
	return (dup);
}

/*int	main()
{
	char	*z = "Sheyda";
	printf("%s\n", z);
	printf("%s\n", ft_strdup(z));
	return (0);
}*/
