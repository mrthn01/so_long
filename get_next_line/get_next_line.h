/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: murathanelcuman <murathanelcuman@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 14:56:11 by melcuman          #+#    #+#             */
/*   Updated: 2024/04/20 13:50:52 by murathanelc      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 5
# endif

int		str_len(const char *str);
char	*str_chr(char *s, int c);
char	*str_join(char *s1, char *s2);
char	*get_next_line(int fd);
char	*ft_next_line(char*buffer);
char	*ft_line(char *buffer);
char	*ft_read(int fd, char *buffer);
#endif