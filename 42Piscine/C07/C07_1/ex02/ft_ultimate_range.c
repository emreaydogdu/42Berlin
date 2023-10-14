/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaydogd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 17:58:53 by emaydogd          #+#    #+#             */
/*   Updated: 2023/03/30 17:58:57 by emaydogd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*res;

	if (min >= max)
	{
		*range = (void *)0;
		return (0);
	}
	res = (int *)malloc((sizeof(int) * (max - min)));
	if (res == (void *)0)
	{
		*range = (void *)0;
		return (-1);
	}
	i = 0;
	while (min < max)
		res[i++] = min++;
	*range = res;
	return (i);
}
/*
#include <stdio.h>
int	main(void)
{
	int i;
	int *range;
	int len = ft_ultimate_range(&range, 0, 20);
	printf("%i\n", len);
	
	i = 0;
	while( i < len)
		printf("%i\n", range[i++]);
		
	return (0);
}
*/
