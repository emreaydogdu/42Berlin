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
int		ft_check_nbr(char *base, char c);

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
	while (base[i])
	{
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j] || base[i] == '+' || base[i] == '-'
				|| base[j] == '+' || base[j] == '-' || base[i] <= ' '
				|| base[i] > 126 || base[j] <= ' ' || base[j] > 126)
				return (0);
			j++;
		}
		i++;
	}
	if (i < 2)
		return (0);
	return (i);
}

int	ft_atoi_base(char *str, char *base)
{
	int	nbr;
	int	basesize;
	int	sign;

	nbr = 0;
	sign = 1;
	basesize = ft_check_base(base);
	while (*str && ((*str >= 9 && *str <= 13) || *str == ' '))
		str++;
	while (*str && (*str == '-' || *str == '+'))
		if (*str++ == '-')
			sign *= -1;
	while (*str)
	{
		if (ft_check_nbr(base, *str) == -1)
			return (-1);
		else
			nbr = (basesize * nbr) + ft_convert(*str++, base);
	}
	return (nbr * sign);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char	*check;
	char	*p;
	int		nb;

	if (!ft_check_base(base_from) || !ft_check_base(base_to))
		return (NULL);
	nb = ft_atoi_base(nbr, base_from);
	if (nb == -1)
		return (NULL);
	p = ft_putnbr_base(nb, base_to);
	if (p == NULL)
		return (NULL);
	return (p);
}
/*
#include <stdio.h>
int main()
{
	printf("$%s$\n", ft_convert_base("10", "0123456789", "0123456789"));
	printf("$%s$\n", ft_convert_base("-----7fffffff", "0123456789abcdef", "01"));
	printf("$%s$\n", ft_convert_base("-+--0001023", "0123456789", "0123456789"));
	printf("$%s$\n", ft_convert_base("-0", "0123456789", "abcdefghij"));
}
*/
