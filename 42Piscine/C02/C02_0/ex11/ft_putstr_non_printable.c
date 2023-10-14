/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaydogd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 18:55:25 by emaydogd          #+#    #+#             */
/*   Updated: 2023/03/21 18:57:41 by emaydogd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putstr_non_printable(unsigned char *str)
{
	char	*hex;
	int		i;

	i = 0;
	hex = "0123456789abcdef";
	while (str[i])
	{
		if (str[i] >= 32 && str[i] <= 126)
			write(1, &str[i], 1);
		else
		{
			write(1, "\\", 1);
			write(1, &hex[str[i] / 16], 1);
			write(1, &hex[str[i] % 16], 1);
		}
		i++;
	}
}
/*
int main (void)
{
	unsigned char str[] =  "Hello\n \xff \t \a";
	ft_putstr_non_printable(str);
	write(1, "\n", 1);
}
*/