/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_controls.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: murathanelcuman <murathanelcuman@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 18:50:29 by murathanelc       #+#    #+#             */
/*   Updated: 2024/04/21 15:08:34 by murathanelc      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	ft_controls(int command, t_game *game)
{
	if (command == 53)
		ft_exit_game(game);
	else if (command == 0 || command == 123)
		ft_move(-1, game);
	else if (command == 2 || command == 124)
		ft_move(1, game);
	else if (command == 13 || command == 126)
		ft_move(-1 * game->width, game);
	else if (command == 1 || command == 125)
		ft_move(game->width, game);
	if (game->character.start == game->character.end
		&& game->character.coin == 0)
	{
		ft_printf("CONGRATULATIONS. YOU WIN :)\n");
		ft_exit_game(game);
	}
	ft_add_image(game);
	return (1);
}
