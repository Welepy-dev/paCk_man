/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long_bonus.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcsilv <marcsilv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 18:31:14 by marcsilv          #+#    #+#             */
/*   Updated: 2024/10/25 19:05:41 by marcsilv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_BONUS_H
# define SO_LONG_BONUS_H

# include "./libft/libft.h"
# include "../minilibx-linux/mlx.h"

# define UP 119
# define LEFT 97
# define DOWN 115
# define RIGHT 100
# define ESCAPE 65307
# define UP_ARROW 65362
# define DOWN_ARROW 65364
# define LEFT_ARROW 65361
# define RIGHT_ARROW 65363

typedef struct s_character
{
	char	move_dir;
	int		steps;
	int		x;
	int		y;
	bool		is_moving;
	bool		power_up;
}	t_character;			//INITIALIZED

typedef struct s_character_registry
{
	t_character	*inky;
	t_character	*pinky;
	t_character	*clyde;
	t_character	*blinky;
	t_character	*pacman;
}	t_character_registry;

typedef struct s_window
{
	void	*mlx;					//initialized
	void	*win;					//initialized
	char	*title;					//initialized
	char	**matrix;			//have to set with parsing
	int		width;			//have to set with parsing
	int		score;			//initialized
	int		height;			//have to set with parsing
	bool		is_valid;		//initially true but have to validate
	bool		is_exitable;		//initialized
	int		time_seconds;		//initialized
	int		time_minutes;		//initialized
}	t_win;

typedef struct s_path
{
	char	*box;
	char	*inky;
	char	*coin;
	char	*pinky;
	char	*clyde;
	char	*blinky;
	char	*pacman;
	char	*exit_open;
	char	*background;
	char	*exit_closed;
	char	*ghost_afraid_0;
	char	*ghost_afraid_1;
}	t_path;					//INITIALIZED

typedef struct s_img
{
	void	*box;
	void	*inky;
	void	*coin;
	void	*pinky;
	void	*clyde;
	void	*blinky;
	void	*pacman;
	void	*exit_open;
	void	*background;
	void	*exit_closed;
	void	*ghost_afraid_0;
	void	*ghost_afraid_1;
}	t_img;				//DONT KNOW WHAT TO DO NOW LMAO

typedef struct s_game
{
	t_win			*win;
	t_img			*img;
	t_path			*paths;
	t_character_registry	*characters;
}	t_game;				//INITIALIZED


#endif