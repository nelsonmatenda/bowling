/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bowling_game.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matenda <matenda@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/11 13:17:10 by matenda           #+#    #+#             */
/*   Updated: 2025/01/11 13:36:04 by matenda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./bowling_game.h"

static int	score;

void	bowling_game_init(void)
{
	score = 0;
}

void	bowling_game_roll(int pins)
{

}

int bowling_game_score(void)
{
	return (score);
}

