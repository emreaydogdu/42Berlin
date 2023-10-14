/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaydogd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 14:25:13 by emaydogd          #+#    #+#             */
/*   Updated: 2023/03/21 14:25:20 by emaydogd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strcapitalize(char *str)
{
	int	i;
	int	swap;

	i = 0;
	swap = 1;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z')
			|| (str[i] >= 'A' && str[i] <= 'Z'))
		{	
			if (swap && str[i] >= 'a' && str[i] <= 'z')
				str[i] -= 32;
			else if (!swap && str[i] >= 'A' && str[i] <= 'Z')
				str[i] += 32;
			swap = 0;
		}
		else if (str[i] >= '0' && str[i] <= '9')
			swap = 0;
		else
			swap = 1;
		i++;
	}
	return (str);
}
/*
#include <stdio.h>

int main(void)
{
	char s[] =  "salut, commEnt TUA vas";
	printf("%s\n", ft_strcapitalize(s));
}
*/