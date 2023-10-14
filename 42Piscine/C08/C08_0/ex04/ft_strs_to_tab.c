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
#include <stdlib.h>
#include <stdio.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcpy(char *str, int size)
{
	int		i;
	char	*cpy;

	i = 0;
	cpy = (char *)malloc(sizeof(char) * (size + 1));
	if (!cpy)
		return ((void *)0);
	while (str[i])
	{
		cpy[i] = str[i];
		i++;
	}
	cpy[i] = '\0';
	return (cpy);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	struct s_stock_str	*strs;
	struct s_stock_str	str;
	int					i;

	strs = (struct s_stock_str *)malloc(sizeof(struct s_stock_str) * (ac + 1));
	i = 0;
	while (av[i])
	{
		str.str = av[i];
		str.size = ft_strlen(av[i]);
		str.copy = ft_strcpy(av[i], str.size);
		strs[i++] = str;
	}
	str.str = 0;
	str.size = 0;
	str.copy = 0;
	strs[i++] = str;
	return (strs);
}

/*
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
