/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaydogd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 14:53:32 by emaydogd          #+#    #+#             */
/*   Updated: 2023/03/18 14:53:36 by emaydogd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_alpha(char *str)
{
	while (*str)
	{
		if (*str < 65 || (*str > 90 && *str < 97) || *str > 122)
			return (0);
		str++;
	}
	return (1);
}
/*
#include <stdio.h>

int main(void)
{
	printf("%i\n", ft_str_is_alpha("qwer/ty"));	
}
*/