/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaydogd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 13:36:51 by emaydogd          #+#    #+#             */
/*   Updated: 2023/03/29 15:41:04 by emaydogd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print(int *board)
{
	int		i;
	char	c;

	i = 0;
	while (i < 10)
	{
		c = board[i++] + '0';
		write(1, &c, 1);
	}
	write(1, "\n", 1);
}

int	ft_abs(int n)
{
	if (n < 0)
		n *= -1;
	return (n);
}

void	ft_solve(int *board, int pos, int *count)
{
	int	i;
	int	j;

	if (pos == 10)
	{
		i = 0;
		ft_print(board);
		(*count)++;
		return ;
	}
	i = 0;
	while (i < 10)
	{
		j = 0;
		while (j < pos && i != board[j] && ft_abs(board[j] - i) != pos - j)
			j++;
		if (j >= pos)
		{
			board[pos] = i;
			ft_solve(board, pos + 1, count);
		}
		i++;
	}
}

int	ft_ten_queens_puzzle(void)
{
	int	board[10];
	int	count;

	count = 0;
	ft_solve(board, 0, &count);
	return (count);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%i", ft_ten_queens_puzzle());
	return (0);
}
*/
