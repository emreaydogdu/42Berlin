/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaydogd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 12:29:54 by emaydogd          #+#    #+#             */
/*   Updated: 2023/03/23 12:30:02 by emaydogd         ###   ########.fr       */
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

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	dlen;
	unsigned int	slen;

	dlen = ft_strlen(dest);
	slen = ft_strlen(src);
	if (size == 0 || size <= dlen)
		return (slen + size);
	i = 0;
	j = dlen;
	while (src[i] && (dlen + i + 1 < size))
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (dlen + slen);
}
/*
#include <stdio.h>

int main() {
	char first[10] = "This is.";
	char last[] = "a potentially long string";
	int size = 10;
	
	int r = ft_strlcat(first, last, size);
	
	printf("Value returned: %d\n",r);
	if( r > size )
		puts("String truncated");
	else
		puts("String was fully copied");
		
	printf("%s\n",first);
	return 0;
}
*/
