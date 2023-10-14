/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaydogd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 12:17:00 by emaydogd          #+#    #+#             */
/*   Updated: 2023/03/23 12:17:06 by emaydogd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[j])
		j++;
	while (src[i])
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>

int main() {
	char dest[50] = "Using strncat function,";
	char src[50] = " this part is added.";
	char dest1[50] = "Using strncat function,";
	char src1[50] = " this part is added.";

	printf("%s\n", ft_strcat(dest, src));
	printf("%s\n", strcat(dest1, src1));
	
	return (0);
}
*/
