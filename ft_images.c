/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_images.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: murathanelcuman <murathanelcuman@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 14:39:50 by murathanelc       #+#    #+#             */
/*   Updated: 2024/04/21 15:10:08 by murathanelc      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_image(t_game *game)
{
	int	i;
	int	j;

	game->map.floor = mlx_xpm_file_to_image(game->mlx_connection,
			"images/floor.xpm", &i, &j);
	game->map.barrier = mlx_xpm_file_to_image(game->mlx_connection,
			"images/wall.xpm", &i, &j);
	game->map.player = mlx_xpm_file_to_image(game->mlx_connection,
			"images/tarcin2.xpm", &i, &j);
	game->map.exit = mlx_xpm_file_to_image(game->mlx_connection,
			"images/exit.xpm", &i, &j);
	game->map.collectable = mlx_xpm_file_to_image(game->mlx_connection,
			"images/item.xpm", &i, &j);
}

void	ft_add_image(t_game *game)
{
	int	i;
	int	j;

	i = 0;
	while (i < (int)ft_strlen(game->map.map))
	{
		j = i / game->width;
		if (game->map.map[i] == '1')
			mlx_put_image_to_window(game->mlx_connection, game->window,
				game->map.barrier, (i % game->width) * 40, j * 40);
		if (game->map.map[i] == 'C')
			mlx_put_image_to_window(game->mlx_connection, game->window,
				game->map.collectable, (i % game->width) * 40, j * 40);
		if (game->map.map[i] == 'P')
			mlx_put_image_to_window(game->mlx_connection, game->window,
				game->map.player, (i % game->width) * 40, j * 40);
		if (game->map.map[i] == 'E')
			mlx_put_image_to_window(game->mlx_connection, game->window,
				game->map.exit, (i % game->width) * 40, j * 40);
		if (game->map.map[i] == '0')
			mlx_put_image_to_window(game->mlx_connection, game->window,
				game->map.floor, (i % game->width) * 40, j * 40);
		i++;
	}
}
