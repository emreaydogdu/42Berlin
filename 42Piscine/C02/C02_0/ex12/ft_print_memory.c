/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaydgdu <rtz>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 23:00:38 by eaydgdu           #+#    #+#             */
/*   Updated: 2023/03/19 23:27:52 by eaydgdu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_adress_hex(char *p)
{
	intptr_t	x;
	size_t		i;
	char		buf[16];

	x = (intptr_t)p;
	i = 0;
	while (i < 16)
	{
		buf[i] = "0123456789abcdef"[(x >> ((16 - 1 - i) * 4)) & 0xf];
		i++;
	}
	write(1, buf, sizeof(buf));
	write(1, ": ", 2);
}

void	ft_print_content(char *str, int size)
{
	char	*content;
	int		i;

	content = str;
	i = 0;
	while (content[i] && i < size)
	{
		if (content[i] >= 32 && content[i] <= 127)
			write(1, &content[i], 1);
		else
			write(1, ".", 1);
		i++;
	}
	if (i < 16)
		write(1, ".", 1);
	write(1, "\n", 1);
}

char	*ft_print_content_hex(char *str, int size)
{
	int	i;

	i = 0;
	while (str[i] && i < size)
	{
		write(1, &"0123456789abcdef"[str[i] / 16], 1);
		write(1, &"0123456789abcdef"[str[i] % 16], 1);
		if (i % 2 == 1)
			write(1, " ", 1);
		i++;
	}
	if (i < size)
	{
		write(1, "00 ", 3);
		i++;
		while (i < 16)
		{
			write(1, "  ", 2);
			if (i % 2 == 0)
				write(1, " ", 1);
			i += 1;
		}
	}
	ft_print_content(str, size);
	return (str + size);
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (i <= size)
	{
		ft_print_adress_hex(addr);
		addr = ft_print_content_hex(addr, 16);
		i += 16;
	}
	return (addr - size);
}
/*
#include <string.h>
int	main(void)
{
	char	*str;

	str = "Bonjour les aminches\t\n\tc\a est fou\ttout\tce qu on "
		"peut faire avec\t\n\tprint_memory\n\n\n\tlol.lol\n ";
	str = ft_print_memory((void *)str, strlen(str));
	return (0);
}
*/