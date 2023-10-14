/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaydogd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 12:52:41 by emaydogd          #+#    #+#             */
/*   Updated: 2023/03/30 16:23:10 by emaydogd         ###   ########.fr       */
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
/*
#include <stdio.h>
#include <stdlib.h>
int	main(int argc, char **argv)
{
	if (argc == 2){
		printf("%i\n", ft_is_prime(atoi(argv[1])));
	}
	return 0;
}
*/
