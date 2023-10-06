/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_player.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: v3l1g4 <v3l1g4@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 23:12:54 by v3l1g4            #+#    #+#             */
/*   Updated: 2023/10/06 20:08:30 by v3l1g4           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_player.h"

void ft_buffer_clear()
{
	int c = 0;
	while (c != '\n' && c != EOF)
		c = getchar();
}

int ft_get_player_name(char *name, int n)
{
	char *index;
	
	index = NULL;
	printf("Player number %d (14 characters maximum): ", n);
	if (fgets(name, 15, stdin) != NULL)
	{
		index = strchr(name, '\n');
		if (index != NULL)
			*index = '\0';
		else
			ft_buffer_clear();
		return 1;
	}
	else
	{
		ft_buffer_clear();
		return 0;
	}
}

struct s_game_header *ft_players(void)
{
	struct s_game_header *gameheader;

	gameheader = (struct s_game_header *)malloc(sizeof(struct s_game_header));
	if (gameheader == NULL)
		return (NULL);
	ft_get_player_name((gameheader->player1), 1);
	ft_get_player_name((gameheader->player2), 2);
	gameheader->score1 = 0;
	gameheader->score2 = 0;
	return (gameheader);
}

void	ft_print_game_header(t_game_header *ptrStruct)
{
	printf("%s ", ptrStruct->player1);
	printf("%d-%d ", ptrStruct->score1, ptrStruct->score2);
	printf("%s\n\n", ptrStruct->player2);
}

void	ft_free_players(t_game_header *game)
{
	free(game);
}
