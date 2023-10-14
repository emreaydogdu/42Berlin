/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaydogd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 13:29:50 by emaydogd          #+#    #+#             */
/*   Updated: 2023/03/21 13:29:54 by emaydogd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_printable(char *str)
{
	while (*str)
	{
		if (*str < 32 || *str > 126)
			return (0);
		str++;
	}
	return (1);
}
/*
#include <stdio.h>

int main(void)
{
	printf("%i\n", ft_str_is_printable("abc"));
}
*/