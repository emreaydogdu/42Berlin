/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaydogd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 12:03:48 by emaydogd          #+#    #+#             */
/*   Updated: 2023/04/02 12:04:46 by emaydogd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef RUSH_H
# define RUSH_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>

char	*ft_get_search_str(long nbr);
char	*ft_word_search(char *buffer, long str, char *value);
void	ft_print_word(char *buffer, long nbr);
long	ft_atoi(char *argv);
int		ft_count(char *dictpath);
char	*ft_strcpy(char *dest, char *src);
int		ft_getfile(char *dictpath);
void	ft_getbuffer(char *dictpath, char *nbr);
int		ft_strlen(char *str);
char	*ft_remove_space(char *dest, char *str);
char	*ft_trim(char *str);
void	ft_putstr(char *str);
int		ft_strstr(char *str, char *to_find);
void	ft_convert_hund(char *buffer, long nbr);
void	ft_convert_thous(char *buffer, long nbr);
void	ft_convert_mill(char *buffer, long nbr);
void	ft_convert_max(char *buffer, long nbr);
void	ft_convert(char *buffer, long nbr);

#endif
