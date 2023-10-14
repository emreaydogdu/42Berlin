/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaydogd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 12:05:59 by emaydogd          #+#    #+#             */
/*   Updated: 2023/03/27 12:06:03 by emaydogd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_atoi(char *str)
{
	int	sign;
	int	res;
	int	found_digit;

	sign = 1;
	res = 0;
	found_digit = 0;
	while (*str
		&& ((!found_digit && (*str == ' ' || *str == '-'
					|| *str == '+'
					|| (*str >= 9 && *str <= 13)))
			|| (*str >= '0' && *str <= '9')))
	{
		if (*str == '-')
			sign *= -1;
		else if (!(*str == ' ' || *str == '+' || (*str >= 9 && *str <= 13)))
		{
			res = res * 10 + *str - '0';
			found_digit = 1;
		}
		str++;
	}
	return (sign * res);
}
/*
#include <stdio.h>
int	main(void) {
	printf("Return: %i\n", ft_atoi("	\t\n\v\f\r ---+--+-1235 567"));
	return(0);
}
*/
