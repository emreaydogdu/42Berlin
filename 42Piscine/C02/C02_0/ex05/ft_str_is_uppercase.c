/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaydogd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 13:29:02 by emaydogd          #+#    #+#             */
/*   Updated: 2023/03/21 13:29:16 by emaydogd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_uppercase(char *str)
{
	while (*str)
	{
		if (*str < 65 || *str > 90)
			return (0);
		str++;
	}
	return (1);
}
/*
#include <stdio.h>

int main(void)
{
	printf("%i\n", ft_str_is_uppercase("HELLO WORLD"));	
}
*/