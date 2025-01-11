/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bowling_game.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matenda <matenda@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/11 13:13:30 by matenda           #+#    #+#             */
/*   Updated: 2025/01/11 19:00:23 by matenda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BOWLING_GAME_H
# define BOWLING_GAME_H

# include <stdbool.h>

# define MAX_ROLL 21

void	bowling_game_init(void);
bool	is_spare(int frame_index, int g_rolls[]);
bool	is_strike(int frame_index, int g_rolls[]);
int		strike_score(int frame_index, int g_rolls[]);
int		spare_score(int frame_index, int g_rolls[]);
int		normal_score(int frame_index, int g_rolls[]);
void	bowling_game_roll(int pins);
int		bowling_game_score(void);

#endif
