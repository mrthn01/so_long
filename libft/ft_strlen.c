/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melcuman <melcuman@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 15:23:39 by melcuman          #+#    #+#             */
/*   Updated: 2023/10/28 15:23:41 by melcuman         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	length_of_string;

	length_of_string = 0;
	while (str[length_of_string] != '\0')
		length_of_string++;
	return (length_of_string);
}
