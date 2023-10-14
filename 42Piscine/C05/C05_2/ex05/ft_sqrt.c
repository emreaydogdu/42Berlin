/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaydogd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 12:39:56 by emaydogd          #+#    #+#             */
/*   Updated: 2023/03/29 12:40:04 by emaydogd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_sqrt(int nb)
{
	int	i;

	if (nb <= 0)
		return (0);
	else
	{
		i = 1;
		while (i * i <= nb && i <= 46340)
		{
			if (i * i == nb)
				return (i);
			i++;
		}
	}
	return (0);
}
/*
#include <stdio.h>
int	main()
{
	printf("2147483647: %i\n", ft_sqrt(2147395600));
	printf("100: %i\n", ft_sqrt(100));
	printf("99: %i\n", ft_sqrt(99));
	printf("1: %i\n", ft_sqrt(1));
	return 0;
}
*/
