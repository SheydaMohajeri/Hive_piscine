/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smohajer <smohajer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 16:01:56 by smohajer          #+#    #+#             */
/*   Updated: 2024/09/19 21:47:34 by smohajer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	p;
	int	q;

	p = 0;
	if (to_find[p] == '\0')
		return (str);
	while (str[p] != '\0')
	{
		q = 0;
		while (str[p + q] == to_find[q])
		{
			q++;
			if (to_find[q] == '\0')
				return (&str[p]);
		}
		
		p++;
	}
	return (0);
}
#include <stdio.h>

int	main(void)
{
	char str[] = "I am a hive student";
	char to_find[] = "hive";
	printf("%s", ft_strstr(str, to_find));
}
