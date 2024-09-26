/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smohajer <smohajer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 11:10:14 by smohajer          #+#    #+#             */
/*   Updated: 2024/09/23 12:36:11 by smohajer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	c;

	if (nb == -2147483648)
	{
		write (1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		write (1, "-", 1);
		nb = -nb;
	}
	if (nb > 9)
		ft_putnbr (nb / 10);
	c = nb % 10 + '0';
	write(1, &c, 1);
}
/*
int	main(void)
{
 		write (1, "\n", 1);
	ft_putnbr(-5);
		write (1, "\n", 1);
	ft_putnbr(0);
		write (1, "\n", 1);
	ft_putnbr(10);
		write (1, "\n", 1);
	ft_putnbr(123);
		write (1, "\n", 1);
	ft_putnbr(2147483647);
	return (0);
}*/
