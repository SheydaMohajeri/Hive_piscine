/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smohajer <smohajer@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 22:35:09 by smohajer          #+#    #+#             */
/*   Updated: 2024/09/12 12:49:49 by smohajer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}
/*int	main(void)
{
	int a;
	int b;

	a = 8;
	b = 4;
	int *ptra = &a;
	int *ptrb = &b;

	ft_ultimate_div_mod(ptra, ptrb);
	printf("%d %d" , a, b);
	return (0);
}*/
