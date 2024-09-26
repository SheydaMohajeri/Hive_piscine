/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smohajer <smohajer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 11:10:14 by smohajer          #+#    #+#             */
/*   Updated: 2024/09/25 16:09:12 by smohajer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;

	argc = 1;
	while (argv[argc])
	{
		i = 0;
		while (argv[argc][i] != '\0')
		{
			write (1, &argv[argc][i], 1);
			i++;
		}
		write (1, "\n", 1);
		argv++;
	}
	return (0);
}
