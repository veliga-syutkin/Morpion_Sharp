/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_player.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: v3l1g4 <v3l1g4@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 23:13:27 by v3l1g4            #+#    #+#             */
/*   Updated: 2023/10/06 18:07:30 by v3l1g4           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FT_PLAYER_H
# define FT_PLAYER_H

# include "ft_all.h"

typedef struct s_game_header
{
	char player1[15];
	char player2[15];
	int score1;
	int score2;
} t_game_header;

void	ft_get_player_name(char *name, int n);

struct s_game_header *ft_players(void);

void	ft_print_game_header(t_game_header *ptrStruct);

#endif
