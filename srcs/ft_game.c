/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_game.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: v3l1g4 <v3l1g4@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 04:16:01 by v3l1g4            #+#    #+#             */
/*   Updated: 2023/10/11 16:19:45 by v3l1g4           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_game.h"

void ft_player_switch(int *player)
{
	if (*player != 2)
		*player = 2;
	else
		*player = 1;
}

int	ft_get_move(int *xy)
{
	char *index;
	char buffer[3];
	
	index = NULL;
	if (fgets(buffer, 3, stdin) != NULL)
	{
		index = strchr(buffer, '\n');
		if (index != NULL)
			*index = '\0';
		else
			ft_buffer_clear();
		*xy = atoi(buffer) - 1;
		if (*xy >= 0 && *xy <= 19)
			return (1);
		else
			return(-1);
	}
	else
	{
		ft_buffer_clear();
//		printf("Error: coffee overload");
		return (0);
	}
}

int	ft_get_cell(int player, char **grid)
{
	int line;
	int column;
	int status;

	if (player != 2)
		printf("Place O on line:\n");
	else
		printf("Place X on line:\n");
	status = ft_get_move(&line);
	if (status == -1)
		return (status);
	if (player != 2)
		printf("Place O on column:\n");
	else
		printf("Place X on column:\n");
	status = ft_get_move(&column);
	if (status == -1)
		return (status);
	if (player != 2)
		grid[line][column] = 'O';
	else
		grid[line][column] = 'X';
	return (0);
}

void	ft_game(int size, char **grid)
{
	int status;
	int player;

	player = 1;
	status = 2;
	while (status != -1)
	{ 
		status = ft_get_cell(player, grid);
		ft_print_grid(size, grid);
		ft_player_switch(&player);
	}
}