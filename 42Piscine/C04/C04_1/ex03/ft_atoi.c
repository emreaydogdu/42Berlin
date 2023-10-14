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

	sign = 1;
	res = 0;
	while (*str && (*str == ' ' || (*str >= 9 && *str <= 13)))
		str++;
	while (*str && (*str == '-' || *str == '+'))
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (*str && (*str >= '0' && *str <= '9'))
	{
		res = res * 10 + *str - '0';
		str++;
	}
	return (sign * res);
}
/*
#include <stdio.h>
int	main(void) {
	printf("Return: %i\n", ft_atoi("	\t\n\v\f\r ---+--+-1235 67"));
	return(0);
}
*/
