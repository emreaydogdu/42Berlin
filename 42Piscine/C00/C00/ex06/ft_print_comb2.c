/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaydogd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 10:55:16 by emaydogd          #+#    #+#             */
/*   Updated: 2023/03/17 10:56:20 by emaydogd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putnbr(int nbr)
{
	char	number;

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

void	ft_putzero(int nbr)
{	
	if (nbr < 10)
	{
		write(1, "0", 1);
	}
	ft_putnbr(nbr);
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = 0;
	while (i < 99)
	{
		j = i + 1;
		while (j <= 99)
		{
			ft_putzero(i);
			write(1, " ", 1);
			ft_putzero(j);
			if (i != 98)
			{
				write(1, ", ", 2);
			}
			j++;
		}
		i++;
	}
}

/*
int	main(void)
{
	ft_print_comb2();
	return (0);
}
*/
