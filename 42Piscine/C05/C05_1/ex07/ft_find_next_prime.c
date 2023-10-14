/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaydogd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 13:12:12 by emaydogd          #+#    #+#             */
/*   Updated: 2023/03/29 13:12:16 by emaydogd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_is_prime(int nb)
{
	int		i;

	if (nb <= 1)
		return (0);
	i = 2;
	while (i <= nb / i)
		if ((nb % i++) == 0)
			return (0);
	return (1);
}

int	ft_find_next_prime(int nb)
{
	while (!ft_is_prime(nb))
		nb++;
	return (nb);
}
/*
#include <stdio.h>
#include <stdlib.h>
int	main(int argc, char **argv)
{
	if (argc == 2){
		printf("%i\n", ft_find_next_prime(atoi(argv[1])));
	}
	return 0;
}
*/
