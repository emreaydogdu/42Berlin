/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaydogd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 15:30:14 by emaydogd          #+#    #+#             */
/*   Updated: 2023/03/28 15:30:24 by emaydogd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	check_base(char *base)
{
	int	i;
	int	j;

	if (!base[0] || !base[1])
		return (0);
	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[j] == base[i])
				return (0);
			j++;
		}
		i++;
	}
	return (i);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		size;
	long	n;

	n = nbr;
	size = check_base(base);
	if (size == 0)
		return ;
	if (n < 0)
	{
		write(1, "-", 1);
		n = -n;
	}
	if (n >= size)
		ft_putnbr_base(n / size, base);
	write(1, &base[n % size], 1);
}
/*
int	main(void)
{
	ft_putnbr_base(7, "poneyvif");
	return (0);
}
*/
