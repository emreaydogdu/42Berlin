/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sub_funct.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwiemann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 11:29:10 by hwiemann          #+#    #+#             */
/*   Updated: 2023/04/02 11:29:18 by hwiemann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "rush.h"

void	ft_convert_hund(char *buffer, long nbr)
{
	if (nbr % 100 == 0)
	{
		ft_print_word(buffer, nbr / 100);
		ft_putstr(" ");
		ft_print_word(buffer, 100);
	}
	else
	{
		ft_print_word(buffer, nbr / 100);
		ft_putstr(" ");
		ft_print_word(buffer, 100);
		ft_putstr(" ");
		ft_convert(buffer, nbr % 100);
	}
}

void	ft_convert_thous(char *buffer, long nbr)
{
	if (nbr % 1000 == 0)
	{
		ft_convert(buffer, nbr / 1000);
		ft_putstr(" ");
		ft_print_word(buffer, 1000);
	}
	else
	{
		ft_convert(buffer, nbr / 1000);
		ft_putstr(" ");
		ft_print_word(buffer, 1000);
		ft_putstr(", ");
		ft_convert(buffer, nbr % 1000);
	}
}

void	ft_convert_mill(char *buffer, long nbr)
{
	if (nbr % 1000000 == 0)
	{
		ft_convert(buffer, nbr / 1000000);
		ft_putstr(" ");
		ft_print_word(buffer, 1000000);
	}
	else
	{
		ft_convert(buffer, nbr / 1000000);
		ft_putstr(" ");
		ft_print_word(buffer, 1000000);
		ft_putstr(", ");
		ft_convert(buffer, nbr % 1000000);
	}
}

void	ft_convert_max(char *buffer, long nbr)
{
	if (nbr % 1000000000 == 0)
	{
		ft_convert(buffer, nbr / 1000000000);
		ft_putstr(" ");
		ft_print_word(buffer, 1000000000);
	}
	else
	{
		ft_convert(buffer, nbr / 1000000000);
		ft_putstr(" ");
		ft_print_word(buffer, 1000000000);
		ft_putstr(", ");
		ft_convert(buffer, nbr % 1000000000);
	}
}

void	ft_convert(char *buffer, long nbr)
{
	if (nbr < 20)
		ft_print_word(buffer, nbr);
	else if (nbr < 100)
	{
		if (nbr % 10 == 0)
			ft_print_word(buffer, nbr);
		else
		{
			ft_print_word(buffer, (nbr / 10) * 10);
			ft_putstr("-");
			ft_print_word(buffer, nbr % 10);
		}
	}
	else if (nbr < 1000)
		ft_convert_hund(buffer, nbr);
	else if (nbr < 1000000)
		ft_convert_thous(buffer, nbr);
	else if (nbr < 1000000000)
		ft_convert_mill(buffer, nbr);
	else if (nbr <= 4294967295)
		ft_convert_max(buffer, nbr);
	else
		ft_putstr("Error");
}
