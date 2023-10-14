/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaydogd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 12:25:35 by emaydogd          #+#    #+#             */
/*   Updated: 2023/03/23 12:25:41 by emaydogd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[j] != '\0')
		j++;
	while (src[i] != '\0' && i < nb)
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

	printf("%s\n", ft_strncat(dest, src, 10));
	printf("%s\n", strncat(dest1, src1, 10));
	
	return (0);
}
*/
