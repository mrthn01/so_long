/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: murathanelcuman <murathanelcuman@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 17:57:42 by murathanelc       #+#    #+#             */
/*   Updated: 2024/04/27 22:29:07 by murathanelc      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	ft_count(char *str, char c)
{
	int	count;
	int	i;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] == c)
			count++;
		i++;
	}
	return (count);
}

int	ft_check_counts(t_game *game)
{
	if (ft_count(game->map, 'C') < 1)
		ft_error();
	if (ft_count(game->map, 'E') != 1)
		ft_error();
	if (ft_count(game->map, 'P') != 1)
		ft_error();
	if (ft_count(game->map, 'C') + ft_count(game->map, 'E')
		+ ft_count(game->map, 'P') + ft_count(game->map, '1')
		+ ft_count(game->map, '0') != (game->width - 1) * (game->height))
		ft_error();
	game->coin = ft_count(game->map, 'C');
	return (1);
}
