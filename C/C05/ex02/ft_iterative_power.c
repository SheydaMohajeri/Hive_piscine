/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smohajer <smohajer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 11:10:14 by smohajer          #+#    #+#             */
/*   Updated: 2024/09/24 08:59:20 by smohajer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;

	i = 1;
	if (nb == 0 && power == 0)
		return (1);
	if (power < 0)
		return (0);
	while (power > 0)
	{
		i *= nb;
		power--;
	}
	return (i);
}

/*#include<stdio.h>
int main(void)
{
printf("%i\n", ft_iterative_power(2,4));
printf("%i\n", ft_iterative_power(0,0));
printf("%i\n", ft_iterative_power(1,-1));
printf("%i\n", ft_iterative_power(-1,1));
printf("%i\n", ft_iterative_power(0,1));
return(0);
}*/
