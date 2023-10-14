/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaydogd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 14:28:03 by emaydogd          #+#    #+#             */
/*   Updated: 2023/03/21 14:28:09 by emaydogd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int	len;

	len = 0;
	while (*(src + len) && --size)
		*dest++ = *(src + len++);
	*dest = '\0';
	while (*(src + len))
		++len;
	return (len);
}
/*
#include <stdio.h>

int main(void)
{
	char s[] =  "";
	char d[6] = "Hello";
	printf("%u\n", ft_strlcpy(d, s, 6));
	printf("%s\n", d);
}
*/