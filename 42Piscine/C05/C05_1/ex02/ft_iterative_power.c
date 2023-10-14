/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaydogd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 12:29:04 by emaydogd          #+#    #+#             */
/*   Updated: 2023/03/29 12:29:15 by emaydogd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_iterative_power(int nb, int power)
{
	int	i;

	i = nb;
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else
		while (--power > 0)
			nb *= i;
	return (nb);
}
/*
#include <stdio.h>
int	main()
{
	printf("%i", ft_iterative_power(10, 2));
	return 0;
}
*/
