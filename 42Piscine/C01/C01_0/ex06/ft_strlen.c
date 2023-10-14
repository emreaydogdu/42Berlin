/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaydogd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 11:36:32 by emaydogd          #+#    #+#             */
/*   Updated: 2023/03/18 11:46:01 by emaydogd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_strlen(char *str)
{
	char	c;
	int		i;

	c = *str;
	i = -1;
	while (c != '\0')
	{
		c = *str++;
		i++;
	}
	return (i);
}

/*
int	main(void)
{
	char *str = "Hello World";
	int count = ft_strlen(str);

	printf("%i \n", count);
}
*/
