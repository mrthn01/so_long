/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melcuman <melcuman@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 15:22:30 by melcuman          #+#    #+#             */
/*   Updated: 2023/10/28 15:22:32 by melcuman         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;
	char			*str;

	i = 0;
	str = (char *)s;
	if (str && f)
	{
		while (str[i])
		{
			(*f)(i, &str[i]);
			i++;
		}
	}
	str[i] = '\0';
	return (str);
}
