/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smohajer <smohajer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 11:10:14 by smohajer          #+#    #+#             */
/*   Updated: 2024/09/24 09:09:43 by smohajer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (nb == 0 && power == 0)
		return (1);
	if (power < 0)
		return (0);
	else
	{
		if (power == 0)
			return (1);
		else
			return (nb * ft_recursive_power(nb, power - 1));
	}
}

/*#include<stdio.h>
int main(void)
{
printf("%i\n", ft_recursive_power(2,4));
printf("%i\n", ft_recursive_power(0,0));
printf("%i\n", ft_recursive_power(1,-1));
printf("%i\n", ft_recursive_power(-1,1));
printf("%i\n", ft_recursive_power(0,1));
return(0);
}*/
