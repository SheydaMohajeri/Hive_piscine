/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smohajer <smohajer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 15:23:21 by smohajer          #+#    #+#             */
/*   Updated: 2024/09/19 08:42:27 by smohajer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	dest_len;
	int	j;

	dest_len = 0;
	j = 0;
	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}
	while (src[j] != '\0')
	{
		dest[dest_len] = src[j];
		j++;
		dest_len++;
	}
	dest[dest_len] = '\0';
	return (dest);
}
/*#include <stdio.h>

int main(void)
{
	char first_string[] = "ABC";
	char second_string[] = "ASP";
	printf("%s\n", ft_strcat(first_string, second_string));
	return(0);
}*/
