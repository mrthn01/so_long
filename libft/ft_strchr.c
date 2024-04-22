/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melcuman <melcuman@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 15:21:49 by melcuman          #+#    #+#             */
/*   Updated: 2023/10/28 15:21:52 by melcuman         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*str;
	char	s_c;

	str = (char *)s;
	s_c = (char)c;
	while (*str != s_c)
	{
		if (*str == 0)
			return (NULL);
		str++;
	}
	return (str);
}
