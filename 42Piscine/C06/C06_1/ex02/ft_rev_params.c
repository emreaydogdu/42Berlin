/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaydogd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 12:14:03 by emaydogd          #+#    #+#             */
/*   Updated: 2023/03/29 12:14:16 by emaydogd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_arg(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		write(1, &str[i++], 1);
	write(1, "\n", 1);
}

int	main(int argc, char **argv)
{
	int	i;

	if (argc > 1)
	{
		i = argc - 1;
		while (0 < i)
		{
			ft_print_arg(argv[i]);
			i--;
		}
	}
	return (0);
}
