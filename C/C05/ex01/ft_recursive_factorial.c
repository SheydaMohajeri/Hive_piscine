/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smohajer <smohajer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 12:49:24 by smohajer          #+#    #+#             */
/*   Updated: 2024/09/24 08:57:05 by smohajer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	else
		nb = nb * ft_recursive_factorial(nb - 1);
	return (nb);
}

/*int	main(void)
{
	printf ("%i\n", ft_recursive_factorial(5));
	printf ("%i\n", ft_recursive_factorial(-2));
	printf ("%i\n", ft_recursive_factorial(0));
	printf ("%i\n", ft_recursive_factorial(1));
	return (0);
}*/
