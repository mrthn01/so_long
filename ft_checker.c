/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checker.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: murathanelcuman <murathanelcuman@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 19:25:04 by murathanelc       #+#    #+#             */
/*   Updated: 2024/04/21 16:47:58 by murathanelc      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	ft_counter(char *str, char s)
{
	int	count;
	int	i;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] == s)
			count++;
		i++;
	}
	return (count);
}

int ft_check_map_parameters(t_game *game)
{
	if (ft_counter(game->map.map, 'C') < 1)
		ft_error();
	if (ft_counter(game->map.map, 'E') != 1)
		ft_error();
	if (ft_counter(game->map.map, 'P') != 1)
		ft_error();
	if (ft_counter(game->map.map, 'E') + ft_counter(game->map.map, 'P')
		+ ft_counter(game->map.map, '1') + ft_counter(game->map.map, '1')
		+ ft_counter(game->map.map, 0) != (game->width - 1) * game->height)
		ft_error();
	game->character.coin = ft_counter(game->map.map, 'C');
	return (1);
}

int	ft_check_map_name(char *str)
{
	int	fd;
	int	length;

	length = ft_strlen(str);
	if (length < 5 || str[length - 1] != 'r' || str[length - 2] != 'e'
		|| str[length - 3] != 'b' || str[length - 4] != '.')
		ft_error();
	fd = open(str, O_RDONLY);
	if (fd < 0)
		ft_error();
	return (fd);
}
