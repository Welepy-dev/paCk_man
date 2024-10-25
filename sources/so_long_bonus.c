/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcsilv <marcsilv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 18:34:45 by marcsilv          #+#    #+#             */
/*   Updated: 2024/10/25 19:05:40 by marcsilv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

void	exit_game(t_game *game)
{
	if (game->characters->inky)
		free(game->characters->inky);
	if (game->characters->pinky)
		free(game->characters->pinky);
	if (game->characters->clyde)
		free(game->characters->clyde);
	if (game->characters->blinky)
		free(game->characters->blinky);
	if (game->characters->pacman)
		free(game->characters->pacman);
	if (game->characters)
		free(game->characters);
	if (game->paths)
		free(game->paths);
	if (game->img)
		free(game->img);
	if (game->win)
		free(game->win);
	if (game)
		free(game);
}

void	init_char(t_character *character)
{
	character = malloc(sizeof(t_character));
	character->move_dir = '\0';		//GAME STATE SHOULD CHANGE THIS OR USE ENEMY AI TO DEFINE
	character->steps = 0;			//DONT NEED FOR GHOST
	character->x = 1;			//HAVE TO CHANGE USING PARSING
	character->y = 1;			//HAVE TO CHANGE USING PARSING
	character->is_moving = false;		//GAME STATE CHANGE THIS
	character->power_up = false;		//CHANGE AFTER PACMANT TAKE A PELLET
}

void	init_paths(t_path *paths)
{
	paths = malloc(sizeof(t_path));
	paths->box = "../imgs/box.xpm";
	paths->inky = "../imgs/inky.xpm";
	paths->coin = "../imgs/coin.xpm";
	paths->clyde = "../imgs/clyde.xpm";
	paths->pacman = "../imgs/pac.xpm";
	paths->pinky = "../imgs/pinky.xpm";
	paths->blinky = "../imgs/blinky.xpm";
	paths->pacman = "../imgs/pacman.xpm";
	paths->background = "../imgs/background";
	paths->exit_open = "../imgs/exit_open.xpm";
	paths->exit_closed = "../imgs/exit_closed.xpm";
	paths->ghost_afraid_0 = "../imgs/ghost_afraid_0.xpm";
	paths->ghost_afraid_1 = "../imgs/ghost_afraid_1.xpm";
}

void	init_win(t_win *win)
{
	win = malloc(sizeof(t_win));
	win->mlx = mlx_init();
	win->win = mlx_new_window(win->mlx, 800, 600, "Pac-Man");
	win->width = 800;
	win->height = 600;
	win->title = "Pac-Man";
	win->is_valid = true;
	win->is_exitable = false;
	win->time_seconds = 0;
	win->time_minutes = 0;
	win->score = 0;
}

void	validate_args(int ac, const char *av)
{
	if (ac != 2)
		print_error("Invalid number of arguments");
	if (ft_strncmp(av + ft_strlen(av) - 4, ".ber", 4) != 0)
		print_error("Invalid file extension");
}

void	print_error(char *error)
{
	if (error)
	{
		ft_putstr_fd("Error: ", 2);
		ft_putstr_fd(error, 2);
		ft_putstr_fd(".\n", 2);
	}
	exit(1);
}

void	init(t_game *game, int ac, char **av)
{
	validate_args(ac, av);
	init_win(game->win);
	init_char(game->characters->inky);
	init_char(game->characters->clyde);
	init_char(game->characters->pinky);
	init_char(game->characters->blinky);
	init_char(game->characters->pacman);
	init_paths(game->paths);
}

int	main(int ac, char **av)
{
	t_game	*game;

	game = malloc(sizeof(t_game));
	init(&game, ac, av);
	return (0);
}
