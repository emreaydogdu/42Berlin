/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: truterhe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 14:59:06 by truterhe          #+#    #+#             */
/*   Updated: 2023/03/25 18:46:32 by truterhe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdlib.h>

///////////////////////////////////////////////
void ft_putchar(char to_print)
{
	write(1, &to_print, 1);
}
void ft_putnbr(int nb)
{
	unsigned int nbr;

	if (nb < 0)
	{
		ft_putchar('-');
		nbr = nb * -1;
	}
	else
		nbr = nb;
	if (nbr / 10 != 0)
		ft_putnbr(nbr / 10);
	ft_putchar(nbr % 10 + 48);
}
void display_solution(int **map)
{
	int i;
	int j;

	i = -1;
	while (++i < 4)
	{
		j = -1;
		while (++j < 4)
		{
			ft_putnbr(map[i][j]);
			ft_putchar(' ');
		}
		ft_putchar('\n');
	}
	ft_putchar('\n');
}
///////////////////////////////////////////////

int	ft_strlen(char *str)
{
	int i;
	int len;

	i = 0;
	len = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= '1' && str[i] <= '4')
		{
			len++;
		}
		else if (!(str[i] >= '1' && str[i] <= '4') && str[i] != ' ')
		{
			return 0;
		}
		
		i++;
	}

	return len;
}

int	*ft_convert(char *str)
{
	int i;
	int *ret;

	ret = malloc(16);
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= '1' && str[i] <= '4')
		{
			ret[i] = str[i] - 48;
		}
		i++;
	}

	return ret;
}

int **ft_init_map(int **map)
{
	int	i;
	int	j;

	map = malloc(4);
	i = 0;
	while ( i < 4)
		map[i++] = malloc(4);
	i = 0;
	j = 0;
	while (i < 4)
	{
		while (j < 4)
			map[i][j++] = 0;
		i++;
	}
	return map;
}

int	ft_check_row(int **map, int skyscraper, int pos)
{
	int c;

	c = 0;
	while (c < pos % 4)
	{
		if (map[pos/4][c] == skyscraper)
		{
			return (0);
		}
		c++;
	}
	return (1);
}
int	ft_check_col(int **map, int skyscraper, int pos)
{
	int r;

	r = 0;
	while (r < pos / 4)
	{
		if (map[r][pos % 4] == skyscraper)
		{
			return (0);
		}
		r++;
	}
	return (1);
}

int ft_check_cond_left(int **map, int *input, int pos)
{
	int count;
	int i;
	int highest = 0;

	i = 0;
	count = 0;
	if (pos % 4 == 3)
	{
		while (i < 4)
		{		
			if (map[pos / 4][i] > highest)
			{
				highest = map[pos/4][i];
				count++;
			}
			i++;
		}

		if (count != input[8 + pos / 4])
		{
		char c = input[8 + (pos / 4)] + '0';
		write(1, &c, 1);
			return (0);		
		}
	}
	
	return (1);
}
int ft_check_cond_right(int **map, int *input, int pos)
{
	int count;
	int i;
	int highest = 0;

	i = 3;
	count = 0;

	if (pos % 4 == 3)
	{
		while (i >= 0)
		{		
			if (map[pos/4][i] > highest)
			{
				highest = map[pos/4][i];
				count++;
			}
			i--;
		}

		if (count != input[12 + pos / 4])
		{
			return (0);		
		}
	}
	
	return (1);
}

int	solve_puzzle(int **map, int *input, int pos){

	int	skyscraper;

	if (pos == 16)
		return (1); // Mark as finished
	
	skyscraper = 1;
	while (skyscraper <=4)
	{
		if(ft_check_row(map, skyscraper, pos) && ft_check_col(map, skyscraper, pos)){

			map[pos / 4][pos % 4] = skyscraper;
			display_solution(map);
			
			if ( ft_check_cond_left(map, input, pos) && ft_check_cond_right(map, input, pos) )
			{

				if (solve_puzzle(map, input, pos+1) )
					return (1);

			} 
			else 
			{
				map[pos / 4][pos % 4] = 0;
			}
		}
		skyscraper++;
	}
	
	return (0); // go one step back if no working combination was found 
}

int main(int argc, char *argv[])
{

	if (argc != 2 || ft_strlen(argv[1]) != 16)
	{
		write(1, "Error", 5);
	} 
	else
	{
		int **map;
		int	*input;

		map = ft_init_map(map);
		input = ft_convert(argv[1]);

		solve_puzzle(map, input, 0);
	}
}
