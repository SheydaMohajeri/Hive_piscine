/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smohajer <smohajer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 17:28:22 by smohajer          #+#    #+#             */
/*   Updated: 2024/09/24 11:05:18 by smohajer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	div;
	int	res;

	div = 2;
	res = nb;
	if (nb < 2)
		return (0);
	while (res > 2)
	{
		if (nb % (res - 1) == 0)
			return (0);
		res--;
	}
	return (1);
}

/*#include<stdio.h>
int main(void)
{
printf("%i\n", ft_is_prime(4));
return(0);
}*/
