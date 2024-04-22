/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melcuman <melcuman@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 15:23:13 by melcuman          #+#    #+#             */
/*   Updated: 2023/10/28 15:23:15 by melcuman         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dst_size)
{
	size_t	i;
	size_t	source_len;

	source_len = ft_strlen(src);
	i = 0;
	if (dst_size == 0)
		return (source_len);
	while (src[i] && i < dst_size - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = 0;
	return (source_len);
}
