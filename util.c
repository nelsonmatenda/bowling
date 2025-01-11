/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   util.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matenda <matenda@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/11 16:56:18 by matenda           #+#    #+#             */
/*   Updated: 2025/01/11 17:47:59 by matenda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bowling_game.h"

bool	is_spare(int frame_index, int g_rolls[])
{
	return ((g_rolls[frame_index] + g_rolls[frame_index + 1] == 10));
}

bool	is_strike(int frame_index, int g_rolls[])
{
	return (g_rolls[frame_index] == 10);
}

int	strike_score(int frame_index, int g_rolls[])
{
	return (10 + g_rolls[frame_index + 1] + g_rolls[frame_index + 2]);
}

int	spare_score(int frame_index, int g_rolls[])
{
	return (10 + g_rolls[frame_index + 2]);
}

int	normal_score(int frame_index, int g_rolls[])
{
	return (g_rolls[frame_index] + g_rolls[frame_index + 1]);
}
