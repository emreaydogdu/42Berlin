/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaydogd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 17:47:14 by emaydogd          #+#    #+#             */
/*   Updated: 2023/03/30 17:47:26 by emaydogd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*dup;

	dup = (char *)malloc(sizeof(char) * (ft_strlen(src) + 1));
	i = 0;
	if (dup == (void *)0)
		return ((void *)0);
	else
	{
		while (src[i])
		{
			dup[i] = src[i];
			i++;
		}
		dup[i] = '\0';
	}
	return (dup);
}
/*
#include <stdio.h>
int	main(void)
{
    	char *s1 = "String";
    	char *s2 = ft_strdup(s1);
	printf("%s\n", s2);
	printf("%p\n", s1);
	printf("%p", s2);
    	free(s2);
	return (0);
}
*/
