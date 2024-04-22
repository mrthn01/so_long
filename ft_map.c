/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: murathanelcuman <murathanelcuman@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 14:05:15 by murathanelc       #+#    #+#             */
/*   Updated: 2024/04/21 16:50:44 by murathanelc      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	ft_map(t_game *game, char *str)
{
	ft_read_map(game, str);
	ft_map_checker(game);
	ft_check_map_parameters(game);
	ft_start(game);
	if (ft_e(game) == 0)
		ft_error();
	if (ft_coin(game) != game->character.coin)
		ft_error();
	return (1);
}

int	ft_read_map(t_game *game, char *path)
{
	char	*line;
	int		fd;
	int		height;

	height = 0;
	fd = ft_check_map_name(path);
	line = get_next_line(fd);
	game->map.map = 0;
	game->width = (int)ft_strlen(line);
	while (line)
	{
		if ((int)ft_strlen(line) != game->width)
			ft_error();
		game->map.map = str_join(game->map.map, line);
		height += 1;
		free(line);
		line = get_next_line(fd);
		if (line && line[(int)ft_strlen(line) - 1] != '\n')
			line = str_join(line, "\n");
	}
	game->height = height;
	close(fd);
	free(line);
	return (0);
}

int ft_map_checker(t_game *game)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < game->height)
	{
		if (game->map.map[j] != '1'
			|| (game->map.map)[i + (game->width) * (game->height - 1)] != 1)
			ft_error();
		i += 1;
		j += game->width;
	}
	i = 0;
	while (i < game->width - 1)
	{
		if (game->map.map[j] != '1'
			|| (game->map.map)[i + (game->width) * (game->height - 1)] != 1)
			ft_error();
		i += 1;
	}
	return (1);
}

void	ft_start(t_game *game)
{
	int	i;

	i = 0;
	while ((game->map.map)[i])
	{
		if ((game->map.map)[i] == 'P')
		{
			game->character.start = i;
			game->count = 0;
		}
		else if ((game->map.map)[i] == 'E')
			game->character.end = i;
		i++;
	}
}
