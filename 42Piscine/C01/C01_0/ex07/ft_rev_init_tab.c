/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_init_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaydogd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 12:59:33 by emaydogd          #+#    #+#             */
/*   Updated: 2023/03/18 13:14:01 by emaydogd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	j = size - 1;
	while (i < j)
	{
		tmp = tab[i];
		tab[i] = tab[j];
		tab[j] = tmp;
		i++;
		j--;
	}
}
/*
int	main(void)
{
	int	tab[5] = {1, 2, 3, 4, 5};
	ft_rev_int_tab(tab, 5);
	
	 int i,j;
   	for (j = 0; j < 5; j++ ) {
      		printf("Element[%d] = %d\n", j, tab[j] );
   	}
}
*/
