/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaydogd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 13:46:55 by emaydogd          #+#    #+#             */
/*   Updated: 2023/03/18 13:47:00 by emaydogd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strcpy(char *dest, char *src)
{
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>

int main(void)
{    
	char	dest[25] = "ByeByeByeByeByeBye";
	char	dest1[25] = "ByeByeByeByeByeBye";
	ft_strcpy(dest, "Hello World");
	strcpy(dest1, "Hello World");
	printf("%s\n", dest);	
	printf("%s\n", dest1);	
}
*/