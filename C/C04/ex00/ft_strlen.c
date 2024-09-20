/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smohajer <smohajer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 20:43:36 by smohajer          #+#    #+#             */
/*   Updated: 2024/09/20 11:00:05 by smohajer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	length;

	length = 0;
	while (str[length] != '\0')
	{
		length++;
	}
	return (length);
}
/*
#include <stdio.h>

int main(void)
{
	char	str[] = "asnnkk";
	int	length = ft_strlen(str);
	printf("length:%d\n", length);
	return(0);
}
*/
