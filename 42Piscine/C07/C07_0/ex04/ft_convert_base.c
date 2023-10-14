/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaydogd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 14:14:14 by emaydogd          #+#    #+#             */
/*   Updated: 2023/04/03 14:14:19 by emaydogd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <unistd.h>

char	*ft_putnbr_base(long nbr, char *base);
int		ft_check_nbr(char *base, char *nbr);

int	ft_convert(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i] && base[i] != c)
		i++;
	return (i);
}

int	ft_check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (base[i])
	{
		j = 0;
		while (j < i)
		{
			if (base[i] == base[j] || (base[i] >= 9 && base[i] <= 13)
				|| base[i] == ' ' || base[i] == '-' || base[i] == '+')
				return (0);
			j++;
		}
		i++;
	}
	if (i < 2)
		return (0);
	return (i);
}

long	ft_atoi_base(char *str, char *base)
{
	long	nbr;
	int		basesize;
	int		sign;
	int		power;

	nbr = 0;
	sign = 1;
	power = 1;
	basesize = ft_check_base(base);
	if (basesize < 2)
		return (-1);
	while (*str && ((*str >= 9 && *str <= 13) || *str == ' '))
		str++;
	while (*str && (*str == '-' || *str == '+'))
	{
		if (*str++ == '-')
			sign *= -1;
	}
	while (*str)
		nbr = (basesize * nbr) + ft_convert(*str++, base);
	return (nbr * sign);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	long	nb;
	char	*check;
	char	*p;

	check = nbr;
	while (*check && ((*check >= 9 && *check <= 13) || *check == ' '))
		check++;
	while (*check && (*check == '-' || *check == '+'))
		check++;
	if (ft_check_nbr(base_from, check) == -1)
		return ((void *)0);
	nb = ft_atoi_base(nbr, base_from);
	if (nb == -1)
		return ((void *)0);
	p = ft_putnbr_base(nb, base_to);
	if (p == (void *)0)
		return ((void *)0);
	return (p);
}

/*
#include <stdio.h>
int main()
{
	char	*p;
	p = ft_convert_base("-0", "0123456789", "abcdefghij");
	printf("i: %s", p);
	free(p);
}
*/