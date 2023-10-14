/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaydogd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 09:39:13 by emaydogd          #+#    #+#             */
/*   Updated: 2023/03/17 09:39:29 by emaydogd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putnbr(int nbr)
{
	char	number;

	if (nbr == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nbr < 0)
	{
		write(1, "-", 1);
	}
	if (nbr > 9)
	{
		ft_putnbr(nbr / 10);
		ft_putnbr(nbr % 10);
	}
	else
	{
		number = nbr + '0';
		write(1, &number, 1);
	}
}

/*
int	main(void) {
	ft_putnbr(45);
	return(0);
}
*/
