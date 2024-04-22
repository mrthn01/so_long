/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melcuman <melcuman@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 15:22:03 by melcuman          #+#    #+#             */
/*   Updated: 2023/10/28 15:22:05 by melcuman         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	char	s_c;
	int		i;

	i = ft_strlen(s);
	str = (char *)s;
	s_c = (char)c;
	while (i >= 0)
	{
		if (str[i] == s_c)
			return (str + i);
		i--;
	}
	return (NULL);
}
