/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smohajer <smohajer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 20:43:36 by smohajer          #+#    #+#             */
/*   Updated: 2024/09/18 15:19:47 by smohajer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && i < n)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	if (i < n)
	{
		return (s1[i] - s2[i]);
	}
	return (0);
}

/*#include <stdio.h>

int main()
{
	char s1[] = "SHEYDA";
	char s2[] = "SHEydA";
	char s3[] = "sheida";
	char s4[] = "SHE";

	printf("%d\n", ft_strncmp(s1, s2, 6));
	printf("%d\n", ft_strncmp(s1, s3, 5));
	printf("%d\n", ft_strncmp(s1, s4, 5));
	printf("%d\n", ft_strncmp(s1, s4, 3));

	return (0);
}*/
