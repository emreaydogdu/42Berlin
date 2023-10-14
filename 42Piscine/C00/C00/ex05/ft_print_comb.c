/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaydogd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 10:53:32 by emaydogd          #+#    #+#             */
/*   Updated: 2023/03/17 10:53:47 by emaydogd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	print_out(char i, char j, char k)
{
	write (1, &i, 1);
	write (1, &j, 1);
	write (1, &k, 1);
	if (i != '7')
	{
		write (1, ", ", 2);
	}	
}

void	ft_print_comb(void)
{
	char	i;
	char	k;
	char	j;

	i = '0';
	while (i < '8')
	{
		j = i +1;
		while (j < '9')
		{
			k = j +1;
			while (k <= '9')
			{
				print_out(i, j, k);
				k++;
			}
			j++;
		}
		i++;
	}
}

/*
int	main(void)
{
	ft_print_comb();
	return(0);
}
*/
