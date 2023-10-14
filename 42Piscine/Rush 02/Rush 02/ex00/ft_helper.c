/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_helper.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaydogd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 12:03:04 by emaydogd          #+#    #+#             */
/*   Updated: 2023/04/02 12:03:08 by emaydogd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "rush.h"

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		write(1, &str[i++], 1);
}

void	ft_print_word(char *buffer, long nbr)
{
	char	*value;

	value = (char *)malloc(sizeof(char) * 4096);
	ft_strcpy(value, ft_word_search(buffer, nbr, value));
	ft_putstr(value);
}

char	*ft_word_search(char *buffer, long nbr, char *value)
{
	int		j;
	int		index;
	char	*number;

	number = ft_get_search_str(nbr);
	index = ft_strstr(buffer, number);
	while (buffer[index] != ':')
		index++;
	j = 0;
	index++;
	value = (char *)malloc(sizeof(char) * 4096);
	while (buffer[index] != '\n')
	{
		value[j] = buffer[index];
		index++;
		j++;
	}
	value[j] = '\0';
	value = ft_trim(value);
	free(number);
	return (value);
}

char	*ft_remove_space(char *str, char *dest)
{
	int		i;
	int		j;
	int		len;

	len = ft_strlen(str);
	i = 0;
	j = 0;
	while (str[i])
	{
		if (str[i] != ' ')
		{
			dest[j] = str[i];
			j++;
		}
		i++;
	}
	dest[j] = '\0';
	return (dest);
}

char	*ft_get_search_str(long nbr)
{
	int		i;
	int		k;
	long	temp;
	long	num;
	char	*number;

	i = 1;
	k = 1;
	num = nbr;
	while (num / 10 != 0)
	{
		i = i * 10;
		num = num / 10;
		k++;
	}
	k = 0;
	number = (char *)malloc(sizeof(char) * 4096);
	while (i > 0)
	{
		temp = nbr / i;
		nbr = nbr - (temp * i);
		i = i / 10;
		number[k++] = temp + '0';
	}
	return (number);
}
