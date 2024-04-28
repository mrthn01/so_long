/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: murathanelcuman <murathanelcuman@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 15:03:25 by melcuman          #+#    #+#             */
/*   Updated: 2024/04/28 15:59:03 by murathanelc      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_strlen(const char *str)
{
	int	length_of_string;

	length_of_string = 0;
	while (str[length_of_string] != '\0')
		length_of_string++;
	return (length_of_string);
}

char	*ft_strchr(char *s, int c)
{
	int	i;

	if (s == 0 || c == '\0')
		return (NULL);
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return (&s[i]);
		i++;
	}
	return (0);
}

char	*ft_strjoin(char *s1, char *s2)
{
	int		i;
	int		j;
	char	*res;

	if (!s1)
	{
		s1 = malloc(sizeof(char));
		*s1 = 0;
	}
	if (!s1 || !s2)
		return (NULL);
	res = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!res)
		return (NULL);
	i = -1;
	while (*(s1 + ++i))
		*(res + i) = *(s1 + i);
	j = 0;
	while (*(s2 + j))
		*(res + i++) = *(s2 + j++);
	*(res + i) = '\0';
	free(s1);
	return (res);
}
