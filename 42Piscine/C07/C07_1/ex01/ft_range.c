/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaydogd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 17:46:25 by emaydogd          #+#    #+#             */
/*   Updated: 2023/03/30 17:46:37 by emaydogd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*range;

	if (min >= max)
		return ((void *)0);
	range = (int *)malloc((sizeof(int) * (max - min)));
	if (range == (void *)0)
		return ((void *)0);
	i = 0;
	while (min < max)
		range[i++] = min++;
	return (range);
}
/*
#include <string.h>
#include <stdio.h>
int	main(int argc, char **argv)
{
	if (argc > 1){
		int i = 0;
		int min = atoi(argv[1]);
		int max = atoi(argv[2]);
		int *range = ft_range(min, max);

		while (i < (max - min))
			printf("%d ", range[i++]);
	}
	return (0);
}
*/
