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

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_valid_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (ft_strlen(base) < 1)
		return (0);
	while (base[i] != '\0')
	{
		if (base[i] <= 32 || base[i] == 127 || base[i] == 43 || base[i] == 45)
			return (0);
		j = i + 1;
		while (j < ft_strlen(base))
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	base_size;

	if (ft_valid_base(base))
	{
		base_size = ft_strlen(base);
		if (nbr < 0)
		{
			write(1, "-", 1);
			ft_putnbr_base(nbr * -1, base);
		}
		else if (nbr >= base_size)
		{
			ft_putnbr_base(nbr / base_size, base);
			ft_putnbr_base(nbr % base_size, base);
		}
		else
		{
			write(1, &base[nbr], 1);
		}
	}
}
/*
int	main(void)
{
	ft_putnbr_base(-2147483647, "0123456789ABCDEF");
	return (0);
}
*/
