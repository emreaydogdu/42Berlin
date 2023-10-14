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
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	slen;

	slen = ft_strlen(src);
	i = 0;
	while (src[i] && (i + 1 < size))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (slen);
}
/*
#include <stdio.h>
#include <bsd/string.h>

int main(void)
{
	char s[] =  "Byebyebye";
	char s1[] =  "Byebyebye";
	char d[6] = "He";
	char d1[6] = "He";
	printf("%u\n", ft_strlcpy(d, s, 10));
	printf("%zu\n", strlcpy(d1, s1, 10));
	
	printf("%s\n", d);
	printf("%s\n", d1);
	
	printf("%lu\n", sizeof(d));
	printf("%lu\n", sizeof(d1));
}
*/
