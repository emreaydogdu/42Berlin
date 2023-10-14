/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaydogd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 15:30:43 by emaydogd          #+#    #+#             */
/*   Updated: 2023/03/28 15:30:47 by emaydogd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

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
		return (0);
	while (*str && (*str == ' ' || (*str >= 9 && *str <= 13)))
		str++;
	while (*str && (*str == '-' || *str == '+'))
		if (*str++ == '-')
			sign *= -1;
	while (*str)
		nbr = (basesize * nbr) + ft_convert(*str++, base);
	return (nbr * sign);
}
/*
int	main(void)
{
	printf("%li", ft_atoi_base("AA", "0123456789ABCDEF"));
	return (0);
}
*/