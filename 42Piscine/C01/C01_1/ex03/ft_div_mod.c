/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaydogd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 12:58:02 by emaydogd          #+#    #+#             */
/*   Updated: 2023/03/21 12:58:08 by emaydogd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}
/*
#include <stdio.h>

int	main(void)
{
	
	int a, b, c, d;
	int* pa;
	int* pb;

	a = 0;
	b = 2;
	c = 30;
	d = 30;
	pa = &c;
	pb = &d;
	
	ft_div_mod(a, b, pa, pb);
	printf("%i : %i", c, d);

}
*/
