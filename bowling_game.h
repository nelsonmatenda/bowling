/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bowling_game.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matenda <matenda@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/11 13:13:30 by matenda           #+#    #+#             */
/*   Updated: 2025/01/11 15:53:37 by matenda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BOWLING_GAME_H
# define BOWLING_GAME_H

# include <stdbool.h>

void	bowling_game_init(void);
void	bowling_game_roll(int pins);
int		bowling_game_score(void);

#endif
