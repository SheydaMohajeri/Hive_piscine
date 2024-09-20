/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smohajer <smohajer@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 14:33:01 by smohajer          #+#    #+#             */
/*   Updated: 2024/09/12 12:46:01 by smohajer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h> 
void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}
/*int main (void)
{
	int *a;
	int *b;
	int c=2;
	int d=5;

	a = &c;
	b = &d;
	ft_swap(a, b);
	printf("%d, %d",*a, *b);
}*/
