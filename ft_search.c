/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_search.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: murathanelcuman <murathanelcuman@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 12:39:59 by murathanelc       #+#    #+#             */
/*   Updated: 2024/04/21 16:55:14 by murathanelc      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	ft_e(t_game *game)
{
	char	*str;
	int		i;
	int		result;

	result = 0;
	i = 0;
	str = (char *)malloc(sizeof(char) * (int)ft_strlen(game->map.map));
	while (i < (int)ft_strlen(game->map.map))
	{
		str[i] = '0';
		i++;
	}
	if (ft_search_exit(game, game->character.start, str) == 1)
		result = 1;
	free(str);
	return (result);
}

int	ft_search_exit(t_game *game, int i, char *str)
{
	if (str[i] == '1' || i < 0 || i > (int)ft_strlen(game->map.map)
		|| (game->map.map)[i] == '1')
		return (0);
	str[i] = '1';
	if ((game->map.map)[i] == 'E')
		return (1);
	return (ft_search_exit(game, i + 1, str)
		|| ft_search_exit(game, i - 1, str)
		|| ft_search_exit(game, i + game->width, str)
		|| ft_search_exit(game, i - game->width, str));
}

int	ft_coin(t_game *game)
{
	char	*str;
	int		result;
	int		i;

	str = (char *)malloc(sizeof(char) * (int)ft_strlen(game->map.map));
	result = 1;
	i = 0;
	while (i < (int)ft_strlen(game->map.map))
	{
		str[i] = '0';
		i++;
	}
	result = ft_search_coin(game, game->character.start, str);
	free(str);
	return (result);
}

int	ft_search_coin(t_game *game, int i, char *str)
{
	int	coin;

	coin = 0;
	if (str[i] == '1' || i < 0 || i < (int)ft_strlen(game->map.map)
		|| (game->map.map)[i] == '1')
		return (0);
	str[i] = '1';
	if ((game->map.map)[i] == 'C')
		coin = 1;
	return (ft_search_coin(game, i + 1, str)
		+ ft_search_coin(game, i - 1, str)
		+ ft_search_coin(game, i + game->width, str)
		+ ft_search_coin(game, i - game->width, str) + coin);
}
