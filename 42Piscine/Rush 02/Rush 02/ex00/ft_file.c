/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_file.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaydogd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 12:03:20 by emaydogd          #+#    #+#             */
/*   Updated: 2023/04/02 12:03:23 by emaydogd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "rush.h"

int	ft_count(char *dictpath)
{
	char	*buffer;
	int		size;
	int		file;

	size = 0;
	file = open(dictpath, O_RDONLY);
	if (file == -1)
		ft_putstr("Dict Error\n");
	else
	{
		buffer = (char *)malloc(sizeof(char) * 1);
		while (read(file, buffer, 1))
			size++;
		free(buffer);
		close(file);
	}
	return (size);
}

void	ft_getbuffer(char *dictpath, char *nbr)
{
	char	*buffer;
	int		file;
	int		size;

	size = ft_count(dictpath);
	file = open(dictpath, O_RDONLY);
	if (file == -1)
	{
		ft_putstr("Dict Error\n");
		return ;
	}
	else
	{
		buffer = (char *)malloc(sizeof(char) * size);
		read(file, buffer, size);
		ft_strstr(buffer, ft_get_search_str(ft_atoi(nbr)));
		ft_convert(buffer, ft_atoi(nbr));
		free(buffer);
		close(file);
	}
}

int	ft_getfile(char *dictpath)
{
	int	file;

	file = open(dictpath, O_RDONLY);
	if (file == -1)
	{
		ft_putstr("Dict Error\n");
		return (0);
	}
	else
		close(file);
	return (1);
}
