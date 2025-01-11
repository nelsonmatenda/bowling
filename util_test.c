/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   util_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matenda <matenda@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/11 17:10:25 by matenda           #+#    #+#             */
/*   Updated: 2025/01/11 17:11:55 by matenda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bowling_game_test.h"

void	roll_many(int n, int pins)
{
	int	i;

	i = -1;
	while (++i < n)
		bowling_game_roll(pins);
}

void	test_gutter_game(void)
{
	bowling_game_init();
	roll_many(20, 0);
	assert(bowling_game_score() == 0 \
			&& "test_gutter_game()");
}
