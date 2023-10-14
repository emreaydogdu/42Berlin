/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grmullin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 13:28:27 by grmullin          #+#    #+#             */
/*   Updated: 2023/03/19 17:26:23 by grmullin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

int	error_handling(int x, int y)
{
	if ((x <= 0) || (y <= 0))
	{
		write(1, "Please enter larger parameter values\n", 37);
		return (1);
	}
	return (0);
}

void	ft_coords(int i, int j, int x, int y)
{
	if (((i == 0) && (j == 0)) || ((i == y - 1) && (j == x - 1)))
		ft_putchar('/');
	else if (((i == 0) && (j == x - 1))
		|| ((i == y - 1) && (j == 0)))
		ft_putchar('\\');
	else if (((i == 0) && (j > 0) && (j < x - 1))
		|| ((j > 0) && (i == y - 1) && (j < x - 1)))
		ft_putchar('*');
	else if (((i > 0) && (i < y - 1) && j == 0)
		|| ((i > 0) && (i < y - 1) && j == x - 1))
		ft_putchar('*');
	else
		ft_putchar(' ');
}

void	rush(int x, int y)
{
	int	i;
	int	j;

	i = 0;
	if (!error_handling(x, y))
	{
		while (i < y)
		{
			j = 0;
			while (j < x)
			{
				ft_coords(i, j, x, y);
				j++;
			}
			i++;
			ft_putchar('\n');
		}
	}
}
