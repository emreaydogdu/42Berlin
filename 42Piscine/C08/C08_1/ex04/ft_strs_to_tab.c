/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaydogd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 16:18:18 by emaydogd          #+#    #+#             */
/*   Updated: 2023/04/03 16:18:29 by emaydogd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_stock_str.h"
#include<stdlib.h>

int	ft_len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	char	*dest;
	int		size;

	size = ft_len(src);
	dest = malloc(sizeof(char) * (size + 1));
	if (dest == NULL)
		return (0);
	else
		ft_strcpy(dest, src);
	return (dest);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*res;
	int			i;

	res = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1));
	if (!res)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		res[i].size = ft_len(av[i]);
		res[i].str = av[i];
		res[i].copy = ft_strdup(av[i]);
		i++;
	}
	res[i].size = 0;
	res[i].str = 0;
	res[i].copy = 0;
	return (res);
}
/*
#include <stdio.h>
int	main(void)
{
	char **strs = malloc(sizeof(char) * 1);

	char *str1 = "Hello";
	struct s_stock_str *strss;

	strs[0] = str1;

	strss = ft_strs_to_tab(1, strs);

	printf("%s\n", strss[0].str);
	printf("%p\n", strss[0].str);
	printf("%i\n", strss[0].size);
	printf("%s\n", strss[0].copy);
	printf("%p\n", strss[0].copy);

	return (0);
}
*/
