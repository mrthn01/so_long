/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: murathanelcuman <murathanelcuman@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 17:14:55 by murathanelc       #+#    #+#             */
/*   Updated: 2024/04/21 16:46:50 by murathanelc      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include <unistd.h>
# include <fcntl.h>
# include "get_next_line/get_next_line.h"
# include "libft/libft.h"
# include "printf/ft_printf.h"
# include "minilibx/mlx.h"
// character structure
typedef struct s_character_object
{
	int	coin;
	int	start;
	int	end;
}	t_character_object;
// map structure
typedef struct s_map
{
	char	*map;
	void	*collectable;
	void	*player;
	void	*exit;
	void	*floor;
	void	*barrier;
}	t_map;
// window structure
typedef struct s_game
{
	t_character_object	character;
	t_map				map;
	void				*mlx_connection;
	void				*window;
	int					height;
	int					width;
	int					count;
}	t_game;
// Initialize the mlx and create a window
void	ft_solong_initialize(t_game *game);
// Image process
void	ft_image(t_game *game);
void	ft_add_image(t_game *game);
// Applications
int		ft_exit_game(t_game *game);
int		ft_move(int direction, t_game *game);
// Key controls
int		ft_controls(int command, t_game *game);
// map
int		ft_map(t_game *game, char *str);
int		ft_read_map(t_game *game, char *path);
int 	ft_map_checker(t_game *game);
void	ft_start(t_game *game);
// checker
int 	ft_check_map_parameters(t_game *game);
int		ft_counter(char *str, char s);
// coin and exit search
int		ft_e(t_game *game);
int		ft_search_exit(t_game *game, int i, char *str);
int		ft_coin(t_game *game);
int		ft_search_coin(t_game *game, int i, char *str);
int		ft_check_map_name(char *str);
// error
void	ft_error(void);

#endif