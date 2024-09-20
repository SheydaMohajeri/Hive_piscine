/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smohajer <smohajer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 09:09:00 by smohajer          #+#    #+#             */
/*   Updated: 2024/09/19 15:40:05 by smohajer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	p;
	unsigned int	q;

	p = 0;
	q = 0 ;
	while (dest[p] != '\0')
	{
		p++;
	}
	while (src[q] != '\0' && q < nb)
	{
		dest[p] = src[q];
		q++;
		p++;
	}
	dest[p] = '\0';
	return (dest);
}
/*
#include<stdio.h>

int main(void)
{
char str1[50] = " ";
char str2[10] = "hhhhsss";

char *result;
result = ft_strncat(str1, str2, 5);
printf("%s\n", result);
return(0);
}
*/
