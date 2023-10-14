/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaydogd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 17:59:56 by emaydogd          #+#    #+#             */
/*   Updated: 2023/03/30 18:00:02 by emaydogd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		k;
	char	*res;

	res = (char *)malloc(sizeof(strs));
	i = 0;
	k = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
			res[k++] = strs[i][j++];
		j = 0;
		while (i != size - 1 && sep[j])
			res[k++] = sep[j++];
		i++;
	}
	res[k] = '\0';
	return (res);
}
/*
#include <stdio.h>
int	main(void)
{
	char **strs = malloc(sizeof(int)*2);
	strs[0] = "Hello";
	strs[1] = "World";
	char *res = ft_strjoin(2, strs, "-||-");
	printf("%s", res);
	free(strs);
	free(res);
	return (0);
}
*/
