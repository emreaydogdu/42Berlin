/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaydogd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 12:41:44 by emaydogd          #+#    #+#             */
/*   Updated: 2023/03/17 10:46:45 by emaydogd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	i;

	i = 97;
	while (i <= 122)
	{
		write(1, &i, 1);
		i++;
	}
}

/*
int	main(void)
{
	ft_print_alphabet();
	return(0);
}
*/
