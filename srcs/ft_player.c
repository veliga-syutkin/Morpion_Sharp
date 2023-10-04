/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_player.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: v3l1g4 <v3l1g4@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 23:12:54 by v3l1g4            #+#    #+#             */
/*   Updated: 2023/10/04 23:48:25 by v3l1g4           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_get_player_name(int n)
{
	char str[15];
	printf("Player number %d", n);
	scanf("%s", &str); 
	return (str);
}

	/* example utilisation scanf : 
	int a;

	printf("Enter first number: ");
	scanf("%d", &a);

	*/