/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaydogd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 12:22:13 by emaydogd          #+#    #+#             */
/*   Updated: 2023/03/29 12:22:31 by emaydogd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_iterative_factorial(int nb)
{
	int	i;

	i = 1;
	if (nb < 0)
		return (0);
	else
		while (nb >= 1)
			i *= nb--;
	return (i);
}
/*
#include <stdio.h>
int	main()
{
	printf("%i", ft_iterative_factorial(4));
	return 0;
}
*/
