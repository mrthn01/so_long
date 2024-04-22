/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_applications.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: murathanelcuman <murathanelcuman@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 15:41:15 by murathanelc       #+#    #+#             */
/*   Updated: 2024/04/21 14:06:26 by murathanelc      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	ft_exit_game(t_game *game)
{
	mlx_destroy_window(game->mlx_connection, game->window);
	free(game->mlx_connection);
	free(game->map.map);
	exit(0);
}

int	ft_move(int direction, t_game *game)
{
	if ((game->character.start) + direction < 0
		|| (game->character.start) + direction >= (int)ft_strlen(game->map.map))
		return (0);
	if ((game->map.map)[(game->character.start) + direction != '1'])
	{
		game->character.start += direction;
		if ((game->map.map)[game->character.start] == 'C')
			game->character.coin -= 1;
		(game->map.map)[game->character.start] = 'P';
		if ((game->character.start) - direction == game->character.end)
			(game->map.map)[(game->character.start) - direction] = 'E';
		else
			(game->map.map)[(game->character.start) - direction] = '0';
	}
	else
		return (0);
	game->count += 1;
	ft_printf("Number of movements: %d\n", game->count);
	return (1);
}
