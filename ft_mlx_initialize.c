/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mlx_initialize.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: murathanelcuman <murathanelcuman@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 14:10:46 by murathanelc       #+#    #+#             */
/*   Updated: 2024/04/21 16:53:01 by murathanelc      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_solong_initialize(t_game *game)
{
	game->mlx_connection = mlx_init();
	if (game == NULL)
		ft_error();
	game->window = mlx_new_window(game->mlx_connection,
			((game->width) - 1) * 40, ((game->height) - 1) * 40,
			"so_long");
	if (game->window == NULL)
	{
		mlx_destroy_window(game->mlx_connection, game->window);
		free(game->window);
		ft_error();
	}
	ft_image(game);
	ft_add_image(game);
}
