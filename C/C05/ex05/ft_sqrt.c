/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smohajer <smohajer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 11:10:14 by smohajer          #+#    #+#             */
/*   Updated: 2024/09/24 09:50:16 by smohajer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	if (nb < 0)
		return (0);
	while (i * i <= nb && i <= 46340)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}
/*#include<stdio.h>
int main(void)
{
int nb1 = 0;
int nb2 = 1;
int nb3 = -1;
int nb4 = 25;
int nb5 = 46340;
printf("%d\n", ft_sqrt(nb1));
printf("%d\n", ft_sqrt(nb2));
printf("%d\n", ft_sqrt(nb3));
printf("%d\n", ft_sqrt(nb4));
printf("%d\n", ft_sqrt(nb5));
return 0;
}*/
