/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaydogd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 14:48:07 by emaydogd          #+#    #+#             */
/*   Updated: 2023/03/18 14:48:09 by emaydogd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int	i;

	i = 0;
	while (*src && i++ < n)
	{
		*dest = *src;
		dest++;
		src++;
	}
	while (i++ < n)
	{
		*dest = '\0';
		dest++;
	}
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>
int main(void)
{    
    char dest[50] = "ByByeByByeByByeByByeByByeByByeByBye";
    char dest1[50] = "ByByeByByeByByeByByeByByeByByeByBye";
	ft_strncpy(dest, "Hel", 6);
	strncpy(dest1, "Hel", 6);
	printf("%s\n", dest);	
	printf("%s\n", dest1);	
}
*/