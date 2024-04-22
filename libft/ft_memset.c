/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melcuman <melcuman@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 16:07:10 by melcuman          #+#    #+#             */
/*   Updated: 2023/10/31 16:07:16 by melcuman         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	i;
	char			*str;

	i = (unsigned char)c;
	str = (char *)b;
	while (len > 0)
	{
		*str = i;
		str++;
		len--;
	}
	return (b);
}
