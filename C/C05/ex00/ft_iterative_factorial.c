/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smohajer <smohajer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 12:50:30 by smohajer          #+#    #+#             */
/*   Updated: 2024/09/24 08:55:47 by smohajer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;

	i = nb;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	while (i > 1)
	{
		nb = nb * (i - 1);
		i--;
	}
	return (nb);
}

/*#include <stdio.h>

int	main(void)
{
	printf ("%i\n", ft_iterative_factorial(0));
	printf ("%i\n", ft_iterative_factorial(-1));
	printf ("%i\n", ft_iterative_factorial(5));
	printf ("%i\n", ft_iterative_factorial(1));
	return (0);
}*/
