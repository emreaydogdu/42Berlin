/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaydogd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 13:26:57 by emaydogd          #+#    #+#             */
/*   Updated: 2023/03/21 13:27:24 by emaydogd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_lowercase(char *str)
{
	while (*str)
	{
		if (*str < 97 || *str > 122)
			return (0);
		str++;
	}
	return (1);
}
/*
#include <stdio.h>

int main(void)
{
	printf("%i\n", ft_str_is_lowercase("abcd"));	
}
*/