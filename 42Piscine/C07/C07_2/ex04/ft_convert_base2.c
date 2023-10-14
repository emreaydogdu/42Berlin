/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaydogd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 14:14:14 by emaydogd          #+#    #+#             */
/*   Updated: 2023/04/03 14:14:19 by emaydogd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_check_base(char *base);

int	ft_check_nbr(char *base, char c)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int	ft_count_digits(int nbr, int basesize)
{
	int	i;

	i = 0;
	while (nbr >= basesize)
	{
		nbr = nbr / basesize;
		i++;
	}
	return (++i);
}

char	*ft_putnbr_base(long nbr, char *base)
{
	int		basesize;
	long	n;
	char	*res;
	int		i;

	basesize = ft_check_base(base);
	if (basesize < 2)
		return ((void *)0);
	n = nbr;
	if (n < 0)
		n *= -1;
	i = ft_count_digits(n, basesize) + (nbr < 0);
	res = (char *)malloc(sizeof(char) * i + 1);
	n = nbr;
	if (nbr < 0)
		n *= -1;
	res[i] = '\0';
	while (i--)
	{
		res[i] = base[n % basesize];
		n = n / basesize;
	}
	if (nbr < 0)
		res[0] = '-';
	return (res);
}
