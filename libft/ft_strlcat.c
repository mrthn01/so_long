/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melcuman <melcuman@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 15:22:54 by melcuman          #+#    #+#             */
/*   Updated: 2023/10/28 15:22:58 by melcuman         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, char const *src, size_t dstsize)
{
	size_t	i;
	size_t	dest_len;
	size_t	source_len;

	dest_len = ft_strlen(dst);
	source_len = ft_strlen(src);
	if (dstsize == 0)
		return (source_len);
	if (dstsize < dest_len)
		return (source_len + dstsize);
	i = 0;
	while (src[i] != 0 && (i + dest_len < dstsize - 1))
	{
		dst[dest_len + i] = src[i];
		i++;
	}
	dst[dest_len + i] = 0;
	return (dest_len + source_len);
}
