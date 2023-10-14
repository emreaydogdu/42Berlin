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

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_size(int size, char **strs, char *sep)
{
	int	i;
	int	count;

	if (size == 0)
		return (1);
	i = 0;
	count = 0;
	while (i < size)
		count += ft_strlen(strs[i++]);
	count += ft_strlen(sep) * (size - 1);
	return (count + 1);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	destlen;

	i = 0;
	destlen = ft_strlen(dest);
	while (src[i])
	{
		dest[destlen + i] = src[i];
		i++;
	}
	dest[destlen + i] = 0;
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*res;
	int		i;

	res = (char *)malloc(sizeof(char) * ft_size(size, strs, sep));
	if (!res)
		return (NULL);
	res[0] = 0;
	if (size == 0)
		return (res);
	i = 0;
	while (i < size)
	{
		ft_strcat(res, strs[i]);
		if (i++ != size - 1)
			ft_strcat(res, sep);
	}
	res[ft_strlen(res)] = 0;
	return (res);
}
/*
#include <stdio.h>
int	main(void)
{
	char **strs = (char **)malloc(sizeof(char) * 2);
	strs[0] = "Hello";
	strs[1] = "World";
	char *res = ft_strjoin(2, strs, "-||-");
	printf("%s", res);
	free(strs);
	free(res);
	return (0);
}
*/
