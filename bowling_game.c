/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bowling_game.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matenda <matenda@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/11 13:17:10 by matenda           #+#    #+#             */
/*   Updated: 2025/01/11 16:39:14 by matenda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./bowling_game.h"

#define MAX_ROLL 21

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

static bool	is_spare(int frame_index)
{
	return ((g_rolls[frame_index] + g_rolls[frame_index + 1] == 10));
}

static bool	is_strike(int frame_index)
{
	return (g_rolls[frame_index] == 10);
}
static int	strike_score(int frame_index)
{
	return (10 + g_rolls[frame_index + 1] + g_rolls[frame_index + 2]);
}

static int	spare_score(int frame_index)
{
	return (10 + g_rolls[frame_index + 2]);
}

static int	normal_score(int frame_index)
{
	return (g_rolls[frame_index] + g_rolls[frame_index + 1]);
}

int	bowling_game_score(void)
{
	int	score;
	int	frame_index;
	int	frame;

	score = 0;
	frame_index = 0;
	frame = -1;
	while (++frame < 10)
	{
		if (is_strike(frame_index))
		{
			score += strike_score(frame_index);
			frame_index += 1;
		}
		else if (is_spare(frame_index))
		{
			score += spare_score(frame_index);
			frame_index += 2;
		}
		else
		{
			score += normal_score(frame_index);
			frame_index += 2;
		}
	}
	return (score);
}
