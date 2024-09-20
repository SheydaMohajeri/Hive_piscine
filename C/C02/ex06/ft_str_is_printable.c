/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smohajer <smohajer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 15:12:01 by smohajer          #+#    #+#             */
/*   Updated: 2024/09/16 19:54:19 by smohajer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (str[i] > 126 || str[i] < 32)
			return (0);
		i++;
	}
	return (1);
}
/*
#include <stdio.h>
int main()
{
	char str[]="aa";
	printf("%d", ft_str_is_printable(str));
	return(0);
}
*/
