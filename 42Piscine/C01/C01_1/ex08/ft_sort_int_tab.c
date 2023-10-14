/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaydogd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 13:19:21 by emaydogd          #+#    #+#             */
/*   Updated: 2023/03/18 13:19:24 by emaydogd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	tmp;

	i = 0;
	while (++i < size)
	{
		if (tab[i] < tab[i - 1])
		{
			tmp = tab[i];
			tab[i] = tab[i - 1];
			tab[i - 1] = tmp;
			i = 0;
		}
	}
}
/*
#include <stdio.h>
int	main(void)
{
	int	tab[5] = {4, 2, 8, 3, 5};
	ft_sort_int_tab(tab, 5);
	
	int j;
   	for (j = 0; j < 5; j++ ) {
      		printf("Element[%d] = %d\n", j, tab[j] );
   	}
}
*/
