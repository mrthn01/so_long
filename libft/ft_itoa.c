/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melcuman <melcuman@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 15:18:37 by melcuman          #+#    #+#             */
/*   Updated: 2023/10/28 15:18:39 by melcuman         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	number_of_digits(int n)
{
	int	digits;

	digits = 0;
	if (n < 0)
		digits++;
	while (n != 0)
	{
		n /= 10;
		digits++;
	}
	return (digits);
}

static char	*ft_zero(int n)
{
	char	*str;

	str = (char *)malloc(2);
	str[0] = n + '0';
	str[1] = 0;
	return (str);
}

char	*ft_is_negative(int n, size_t len)
{
	char		*str;
	size_t		i;

	i = len;
	str = (char *)malloc(len + 1);
	if (!str)
		return (NULL);
	str[0] = '-';
	if (n == -2147483648)
	{
		n *= -1;
		str[i - 1] = '8';
		i--;
		n /= 10;
	}
	if (n < 0)
		n *= -1;
	while (n != 0)
	{
		str[i - 1] = (n % 10) + '0';
		str[len] = 0;
		i--;
		n /= 10;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	char	*str;
	size_t	len;
	size_t	i;

	if (n == 0)
		return (ft_zero(n));
	len = number_of_digits(n);
	if (n < 0)
		return (ft_is_negative(n, len));
	str = (char *)malloc(len + 1);
	if (!str)
		return (NULL);
	i = len;
	while (n != 0)
	{
		str[i - 1] = (n % 10) + '0';
		str[len] = 0;
		i--;
		n /= 10;
	}
	return (str);
}
