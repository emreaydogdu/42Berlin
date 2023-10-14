/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_math.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaydogd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 12:03:04 by emaydogd          #+#    #+#             */
/*   Updated: 2023/04/02 17:24:35 by emaydogd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "rush.h"
#include <ctype.h>

long	ft_atoi(char *argv)
{
	long	convert;
	long	nbr;
	int		j;

	nbr = 0;
	j = 0;
	while (argv[j] != '\0')
	{
		if (argv[j] < '0' || argv[j] > '9')
			return (-1);
		convert = argv[j] - '0';
		nbr = (nbr * 10) + convert;
		j++;
	}
	return (nbr);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (to_find[j] == '\0')
		return (0);
	while (str[i] != '\0')
	{
		while (str[i + j] == to_find[j] && str[i + j] != '\0')
			j++;
		if (to_find[j] == '\0')
		{
			while (str[i + j] == ' ')
				j++;
			if (str[i + j] == ':')
				return (i);
		}
		i++;
		j = 0;
	}
	return (-1);
}

char	*ft_trim(char *str)
{
	char	*back;

	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	back = str + ft_strlen(str) - 1;
	while (*back == ' ' || (*back >= 9 && *back <= 13))
		--back;
	*(back + 1) = '\0';
	return (str);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
