/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaydogd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 12:02:49 by emaydogd          #+#    #+#             */
/*   Updated: 2023/04/02 12:02:52 by emaydogd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "rush.h"

int	ft_checkargs(int argc, char **argv)
{
	if ((argc != 1 && argc != 2 && argc != 3)
		|| (argc == 2 && ft_atoi(argv[1]) == -1)
		|| (argc == 3 && ft_atoi(argv[2]) == -1))
	{
		ft_putstr("Error");
		return (0);
	}
	return (1);
}

char	*ft_read_stdin(char *nbr)
{
	long		i;

	i = read(STDIN_FILENO, nbr, 10);
	nbr = ft_trim(nbr);
	nbr[i] = '\0';
	if (ft_atoi(nbr) == -1)
		ft_strcpy(nbr, "4294967296");
	return (nbr);
}

int	main(int argc, char **argv)
{
	char	*nbr;
	char	*dictpath;

	dictpath = "numbers.dict";
	nbr = (char *)malloc(sizeof(char) * 11);
	if (ft_checkargs(argc, argv))
	{
		if (argc == 1)
			nbr = ft_read_stdin(nbr);
		else if (argc == 2)
			ft_strcpy(nbr, argv[1]);
		else if (argc == 3)
		{
			dictpath = argv[1];
			ft_strcpy(nbr, argv[2]);
		}
		if (ft_getfile(dictpath))
			ft_getbuffer(dictpath, nbr);
	}
	free(nbr);
	ft_putstr("\n");
	return (0);
}
