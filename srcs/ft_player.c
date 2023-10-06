/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_player.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: v3l1g4 <v3l1g4@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 23:12:54 by v3l1g4            #+#    #+#             */
/*   Updated: 2023/10/06 18:08:44 by v3l1g4           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_player.h"

void	ft_get_player_name(char *name, int n)
{
	printf("Player number %d:\n", n);
	scanf("%s", name);
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
