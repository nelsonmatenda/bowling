/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bowling_game.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matenda <matenda@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/11 13:17:10 by matenda           #+#    #+#             */
/*   Updated: 2025/01/11 17:45:03 by matenda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./bowling_game.h"

static int	g_rolls[MAX_ROLL];
static int	g_cur_roll;

void	bowling_game_init(void)
{
	int	i;

	i = -1;
	while (++i < MAX_ROLL)
		g_rolls[i] = 0;
	g_cur_roll = 0;
}

void	bowling_game_roll(int pins)
{
	g_rolls[g_cur_roll++] = pins;
}

void	calculate_score(int *score)
{
	int	frame;
	int	frame_index;

	frame = -1;
	frame_index = 0;
	while (++frame < 10)
	{
		if (is_strike(frame_index, g_rolls))
		{
			*score += strike_score(frame_index, g_rolls);
			frame_index += 1;
		}
		else if (is_spare(frame_index, g_rolls))
		{
			*score += spare_score(frame_index, g_rolls);
			frame_index += 2;
		}
		else
		{
			*score += normal_score(frame_index, g_rolls);
			frame_index += 2;
		}
	}
}

int	bowling_game_score(void)
{
	int	score;

	score = 0;
	calculate_score(&score);
	return (score);
}
