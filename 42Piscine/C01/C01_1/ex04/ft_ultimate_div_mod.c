/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaydogd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 12:59:27 by emaydogd          #+#    #+#             */
/*   Updated: 2023/03/21 12:59:43 by emaydogd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	if (*b != 0)
	{
		temp = *a;
		*a = temp / *b;
		*b = temp % *b;
	}
}
/*#include <stdio.h>

int	main(void)
{
	
	int	a, b;


	a = 189;
	b = 100;
	ft_ultimate_div_mod(&a, &b);
	printf("%i : %i", a, b);

}
*/
