/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaydogd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 15:18:55 by emaydogd          #+#    #+#             */
/*   Updated: 2023/04/03 15:19:04 by emaydogd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_charset(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
		if (c == charset[i++])
			return (1);
	return (0);
}

int	ft_count_words(char *str, char *charset)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (str[i])
	{
		while (str[i] && ft_charset(str[i], charset))
			i++;
		if (str[i])
			count++;
		while (str[i] && !ft_charset(str[i], charset))
			i++;
	}
	return (count);
}

int	ft_strlen_sep(char *str, char *charset)
{
	int	i;

	i = 0;
	while (str[i] && !ft_charset(str[i], charset))
		i++;
	return (i);
}

char	*ft_word(char *str, char *charset)
{
	int		i;
	int		len_word;
	char	*word;

	i = -1;
	len_word = ft_strlen_sep(str, charset);
	word = (char *)malloc(sizeof(char) * (len_word + 1));
	while (++i < len_word)
		word[i] = str[i];
	word[i] = '\0';
	return (word);
}

char	**ft_split(char *str, char *charset)
{
	char	**strs;
	int		i;

	i = 0;
	strs = (char **)malloc(sizeof(char *) * (ft_count_words(str, charset) + 1));
	while (*str)
	{
		while (*str && ft_charset(*str, charset))
			str++;
		if (*str)
			strs[i++] = ft_word(str, charset);
		while (*str && !ft_charset(*str, charset))
			str++;
	}
	strs[i] = (void *)0;
	return (strs);
}
/*
#include <stdio.h>
int	main(void)
{
	int		i = 0;
	char	**split = ft_split("Kurt,Kanns;;555678;DE", ",;");
	while (split[i])
		printf("%s\n", split[i++]);
}
*/
